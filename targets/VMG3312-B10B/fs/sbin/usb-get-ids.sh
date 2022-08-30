#!/bin/sh

#set -x
set +v
LOCK2=/tmp/usb-find-devices.lock
DEBUG_FILE="/tmp/3g-hotplug.debug"
OUTPUT_FILE="/tmp/usb-get-ids.out"

#ModelName=`nvram_get 2860 ModelName`
# I-Wei:
ModelName="Compro"
# I-Wei: end

#echo `date` " usb-get-ids: ModelName = " "$ModelName" >> "$DEBUG_FILE"

# lock up first
while ! mkdir $LOCK2 ; do
#    echo `date` " usb-get-ids: $$ wait for lock" >> $DEBUG_FILE
    sleep 1
done

#echo `date` " usb-get-ids: $$ got lock" >> $DEBUG_FILE

# find the non-hub devices
/sbin/usb-find-devices.sh - 09

cp /tmp/usb-find-devices /tmp/usb-find-devices.$$

# unlock
#echo `date` " usb-get-ids: $$ freed lock" >> $DEBUG_FILE
rm -rf $LOCK2

# there may be more than one non-hub device
if [ -e /tmp/usb-find-devices.$$ ]; then
    dev_cnt=`cat /tmp/usb-find-devices.$$ | wc -l`
    if [ $dev_cnt -eq 0 ]; then
        # not non-hub device, done
#	echo `date` " usb-get-ids: no non-hub device, exit" >> $DEBUG_FILE
	:
    else
	for i in `seq 1 $dev_cnt` ; do
	    devdir=`cat /tmp/usb-find-devices.$$ | head -$i | tail -1`
	    
	    dev_vid="`cat $devdir/idVendor`"
	    dev_pid="`cat $devdir/idProduct`"
	    if [ "$dev_vid" == "0a12" -a "$dev_pid" == "0001" ]; then
                # this is the Abocom 1.1 class 1 BT dongle
		continue
	    else
                MWRUSBVendor=$dev_vid
                MWRUSBProdID=$dev_pid
                MWRUSBDevNum="`cat $devdir/devnum`"
                MWRUSBClass="`cat $devdir/bDeviceClass`"
		
                #MWR-215: /sys/bus/usb/devices/1-1
                #MWR-222 port 01: /sys/bus/usb/devices/1-1.2 (next to LAN connector)
                #MWR-215 port 03: /sys/bus/usb/devices/1-1.4 (next to AC connector)
		Base=`basename $devdir`
                # MWR-215 and MWR-211 have only one USB port

		if [ "$ModelName" != "MWR-215" -a "$ModelName" != "MWR-211" -a "$ModelName" != "Compro" ]; then
		    Prefix=`echo $Base | cut -d . -f 1-2`
		    if [ "$Prefix" == "1-1.2" ]; then
			MWRUSBPort="01"
		    elif [ "$Prefix" == "1-1.4" ]; then
			MWRUSBPort="03"
		    fi
		fi
		echo $MWRUSBPort > $OUTPUT_FILE
		echo $MWRUSBVendor >> $OUTPUT_FILE
		echo $MWRUSBProdID >> $OUTPUT_FILE
		echo $MWRUSBDevNum >> $OUTPUT_FILE
		echo $MWRUSBClass >> $OUTPUT_FILE
		#export MWRUSBPort
		#export MWRUSBVendor
		#export MWRUSBProdID
	    fi	
	done
    fi
fi

# clean up
rm -f /tmp/usb-find-devices.$$

# disable old way
if false; then

TOPOLOGY=`grep "^T:" "$1" | tail -1`

#echo "TOPOLOGY = " "$TOPOLOGY" >> "$DEBUG_FILE"

MWRUSBPort=`echo "$TOPOLOGY" | awk '{print $5}' | cut -d= -f2`

#echo "Port = " "$MWRUSBPort" >> "$DEBUG_FILE"

PRODUCT=`grep "^P:" "$1" | tail -1`

#echo "PRODUCT = " "$PRODUCT" >> "$DEBUG_FILE"

MWRUSBVendor=`echo "$PRODUCT" | awk '{print $2}' | cut -d= -f2`
MWRUSBProdID=`echo "$PRODUCT" | awk '{print $3}' | cut -d= -f2`

#echo `date` " usb-get-ids: Vendor = " "$MWRUSBVendor" >> "$DEBUG_FILE"
#echo `date` " usb-get-ids: ProdID = " "$MWRUSBProdID" >> "$DEBUG_FILE"

INTERFACE=`cat "$1" | grep "^I:" | tail -1`

GREPIT=`echo "$INTERFACE" | grep "Cls=08(stor.)"`

if [ "$GREPIT" = "$INTERFACE" ]; then 
#    echo `date` " usb-get-ids: return1 " "$GREPIT" >> "$DEBUG_FILE"
    MWRUSBStorage="yes"
else
#    echo `date` " usb-get-ids: return2 " "$GREPIT" >> "$DEBUG_FILE"
    MWRUSBStorage="no"
fi

#echo "INTERFACE = " "$INTERFACE" >> "$DEBUG_FILE"
#echo `date` " usb-get-ids: Storage? = " "$MWRUSBStorage" >> "$DEBUG_FILE"

#export MWRUSBPort
#export MWRUSBVendor
#export MWRUSBProdID
#export MWRUSBStorage

fi

