#!/bin/sh
# based on the usb_modeswitch.sh in the 1.1.0 package
# reads the usb and scsi info to find appropriate config file 
# in the usb_modeswitch.d directory
# then use that config file to do mode switch
# int the original script, it does something special with option
# that is not duplicated here yet

#set -x
set +v

PREFIX_PATH="/var"
#MODESWITCH_LIST=$PREFIX_PATH"/etc_ro/mwr/3g-modeswitch"
#SUPPORTDEV_LIST=$PREFIX_PATH"/etc_ro/mwr/3g-devices"
SUPPORTDEV_LIST=$PREFIX_PATH"/etc/wwan/3g-devices"
#PPP_3G_FILE=$PREFIX_PATH"/etc_ro/ppp/peers/3g"
#PPP_3G_FILE=$PREFIX_PATH"/etc/3g"
PPP_CHAT_FILE=$PREFIX_PATH"/etc/chat"
STATUS_FILE=$PREFIX_PATH"/etc/3g-status"
USBINFO_FILE="/tmp/usb-get-ids.out"
USB_MODESWITCH_DATA=$PREFIX_PATH"/etc/wwan/usb_modeswitch.d"
KERNEL_VERSION="`uname -r`"
SERIAL_MODULES="/lib/modules/$KERNEL_VERSION/kernel/drivers/usb/serial"
CLASS_MODULES="/lib/modules/$KERNEL_VERSION/kernel/drivers/usb/class"
CDCETHER_MODULES="/lib/modules/$KERNEL_VERSION/kernel/drivers/net/usb"
# Chia: 
LOCK2=/tmp/usb-find-devices.lock
DRIVER_STATUS_FILE=$PREFIX_PATH"/etc/driver-status"
DEBUG_FILE="/tmp/3g-hotplug.debug"
# Chia: end

DELAY_MODESWITCH=5
DELAY_DRIVER=3
DELAY_SCAN=1

MODESWITCH="no"
DEVICE_NUMBER=$1
VID=$2
PID=$3
# Chia: usb_modeswitch utilities
# usb_modeswitch 1.1.1 uses only uPr, uMa and sVe
matchMap() 
{
        if [ "$1" == "sVe" ]; then
	        return 0
	elif [ "$1" == "sMo" ]; then
	        return 1
	elif [ "$1" == "sRe" ]; then
	        return 2
        elif [ "$1" == "uMa" ]; then
	        return 3
	elif [ "$1" == "uPr" ]; then
	        return 4
	elif [ "$1" == "uSe" ]; then
	        return 5
	else
	        return 99
	fi
}

readScsiAttrs() 
{

echo `date` " usb-modeswitch: readScsiAttrs: SCSI dir exists: "$1"" >> "$DEBUG_FILE"

if [ -e "$1"/vendor ]; then
        scsi0=`cat "$1"/vendor`
fi
if [ -e "$1"/model ]; then
        scsi1=`cat "$1"/model`
fi
if [ -e "$1"/serial ]; then
        scsi2=`cat "$1"/serial`
fi
}

readUsbAttrs() 
{
echo `date` " usb-modeswitch: readUsbAttrs: USB dir exists: $1" >> "$DEBUG_FILE"

if [ -e "$1"/idVendor ]; then
        usb0=`cat "$1"/idVendor`
fi
if [ -e "$1"/idProduct ]; then
        usb1=`cat "$1"/idProduct`
fi
if [ -e "$1"/manufacturer ]; then
        usb2=`cat "$1"/manufacturer`
fi
if [ -e "$1"/product ]; then
        usb3=`cat "$1"/product`
fi
if [ -e "$1"/serial ]; then
        usb4=`cat "$1"/serial`
fi
if [ -e "$1"/devnum ]; then
        DEVICE_NUMBER=`cat "$1"/devnum`
fi
if [ -e "$1"/bDeviceClass ]; then
        CLASS=`cat "$1"/bDeviceClass`
fi
}

wwan_log()
{
	echo `date` "$1" >> $DEBUG_FILE
}

# retruns 1 if a match is found
matchDevice() 
{

# extract the 3rd part of the config file name
# if the vid:pid is unique, there is no 3rd part
devinfo=${1##*/}
stringList=`echo "$devinfo" | cut -d _ -f 3`
#stringList=`echo "$devinfo" | cut -d _ -f 3`
if [ "$stringList" == "" ]; then
    return 1
fi

if [ "$stringList" == "?" ]; then
    return 0
fi

id=`echo "$stringList" | cut -d = -f 1`
matchstring=`echo "$stringList" | cut -d = -f 2 | sed -e 's/_/ /g'` 

#if [[ "${match[matchMap $id]}" != "${matchstring}"* ]]; then
#if [ "${match[matchMap $id]}" != "${matchstring}" ]; then
matchMap $id
key1=$?
case $key1 in
    0) val1=$scsi0;;
    1) val1=$scsi1;;
    2) val1=$scsi2;;
    3) val1=$usb2;;
    4) val1=$usb3;;
    5) val1=$usb4;;
esac
#if [ "$val1" != $matchstring ]; then
echo $val1 | grep "$matchstring"
if [ "$?" == "1" ]; then
        matchFound="not found"
	return
fi

matchFound=`echo $devinfo`
return
}
# MAIN

rm -f /tmp/ms-*

scsi0=""
scsi1=""
scsi2=""
usb2=""
usb3=""
usb4=""
match0=`echo $scsi0`                # sVe -> vendor
match1=`echo $scsi1`                # sMo -> model
match2=`echo $scsi2`                # sRe -> rev
match3=`echo $usb2`                 # uMa -> manufacturer
match4=`echo $usb3`                 # uPr -> product
match5=`echo $usb4`                 # uSe -> serial

#MWR-215 : /sys/bus/usb/devices/1-1
#MWR-222 port 01 : /sys/bus/usb/devices/1-1.2 (next to LAN connector)
#MWR-222 port 03 : /sys/bus/usb/devices/1-1.4 (next to AC connector)
#source /sbin/usb-get-ids.sh /proc/bus/usb/devices
/sbin/usb-get-ids.sh /proc/bus/usb/devices
MWRUSBPort=`head -1 $USBINFO_FILE | tail -1`
MWRUSBVendor=`head -2 $USBINFO_FILE | tail -1`
MWRUSBProdID=`head -3 $USBINFO_FILE | tail -1`

echo `date` " usb-modeswitch: Port " "$MWRUSBPort" " Vendor " "$MWRUSBVendor" " ProdID " "$MWRUSBProdID" >> "$DEBUG_FILE"

# lock up first
while ! mkdir $LOCK2 ; do
    echo `date` " usb-modeswitch: $$ wait for lock" >> $DEBUG_FILE
    sleep 1
done

echo `date` " usb-modeswitch: $$ got lock" >> $DEBUG_FILE

/sbin/usb-find-devices.sh - 09

cp /tmp/usb-find-devices /tmp/usb-find-devices.$$

# unlock
echo `date` " usb-modeswitch: $$ free lock" >> $DEBUG_FILE
rm -rf $LOCK2

#devdir=`cat /tmp/usb-find-devices.$$ | head -1`

# there may be more than one non-hub device
if [ -e /tmp/usb-find-devices.$$ ]; then
    dev_cnt=`cat /tmp/usb-find-devices.$$ | wc -l`
    if [ $dev_cnt -eq 0 ]; then
        # not non-hub device, done
	echo `date` " usb-get-ids: no non-hub device, exit" >> $DEBUG_FILE

	# clean up
	rm -f /tmp/usb-find-devices.$$

	exit
    fi
fi

for i in `seq 1 $dev_cnt` ; do
    devdir=`cat /tmp/usb-find-devices.$$ | head -$i | tail -1`
    
    dev_vid="`cat $devdir/idVendor`"
    dev_pid="`cat $devdir/idProduct`"
    if [ "$dev_vid" == "0a12" -a "$dev_pid" == "0001" ]; then
        # this is the Abocom 1.1 class 1 BT dongle
	continue
	fi
	
	echo `date` " usb-modeswitch.sh: devdir is " "$devdir" >> "$DEBUG_FILE"
	
	readUsbAttrs $devdir
	
	if [ "$usb0" == "" -o "$usb1" == "" ]; then
	    echo `date` " usb-modeswitch: test USB IDs not found in sysfs tree. Returning" >> "$DEBUG_FILE"

	    # clean up
	    rm -f /tmp/usb-find-devices.$$
	    
	    exit
	fi
	
        # Populate the USB portion of the match array
	match3=`echo $usb2`                # uMA -> manufacturer
	match4=`echo $usb3`                # uPr -> product
	match5=`echo $usb4`                # uSe -> serial
	
	echo `date` " usb-modeswitch: test USB values from sysfs:" >> "$DEBUG_FILE"
	echo `date` " usb-modeswitch: test  usb0   $usb0" >> "$DEBUG_FILE"
	echo `date` " usb-modeswitch: test  usb1   $usb1" >> "$DEBUG_FILE"

	echo `date` " usb-modeswitch: test  uMa   $usb2" >> "$DEBUG_FILE"
	echo `date` " usb-modeswitch: test  uPr   $usb3" >> "$DEBUG_FILE"
	echo `date` " usb-modeswitch: test  uSe   $usb4" >> "$DEBUG_FILE"

	
##Add start
	WWANPATH=/sbin
	VID=$usb0
	PID=$usb1
	DATAPATH=/var/wwan
	DEVICE_DATA_PRENAME=wwan_dev
	DEVICE_STATUS_NAME=dev_status
	DEVICE_INIT_NAME=dev_init
	DEVICE_TYPE_NAME=dev_type
	DEVICE_DRIVER_NAME=dev_driver
	MATCH_WWAN_PACKAGE_NAME=match_wwanpackage

	mkdir -p $DATAPATH
	DEVICE_ID=$DEVICE_NUMBER:$VID:$PID
	DEVICE_DIR=$DATAPATH/$DEVICE_DATA_PRENAME:$DEVICE_ID
	
	if [ -e "$DEVICE_DIR" ]; then
		wwan_log "[$0] $DEVICE_ID already processed"
		#exit
	fi
	# create WWAN device info dir
	mkdir -p $DEVICE_DIR
	DEVICE_STATUS_FILE=$DEVICE_DIR/$DEVICE_STATUS_NAME
	DEVICE_DRIVER_FILE=$DEVICE_DIR/$DEVICE_DRIVER_NAME
	MATCH_WWAN_PACKAGE=$DEVICE_DIR/$MATCH_WWAN_PACKAGE_NAME
	WP_MODESWITCH_CMD_NAME="MODESWITCH_CMD"
	WP_TARGET_CLASS_NAME="TARGET_CLASS"
	WP_DRIVER_NAME="DRIVER"
	echo "DETECT_USB_DEVICE" > $DEVICE_STATUS_FILE

	##################### usb modeswitch #####################
	# need mode switch?
	rm -rf $MATCH_WWAN_PACKAGE
	$WWANPATH/wwan-package-match.sh DEFAULT $VID $PID $MATCH_WWAN_PACKAGE
	wwan_log "[$0] MATCH_WWAN_PACKAGE, $MATCH_WWAN_PACKAGE"	
	if [ -f "$MATCH_WWAN_PACKAGE" ]; then
		TARGET_CLASS=`grep $WP_TARGET_CLASS_NAME $MATCH_WWAN_PACKAGE | tr -d '\r' | tr -d ' ' | cut -d ':' -f 2`
		if [ "$TARGET_CLASS" = "" -o "$TARGET_CLASS" != "$CLASS" ]; then
			echo "MODE_SWITCH" > $DEVICE_STATUS_FILE
			wwan_log "[$0] need mode switch"
			USB_MODESWITCH_CMD=`grep $WP_MODESWITCH_CMD_NAME $MATCH_WWAN_PACKAGE | tr -d '\r' | cut -d ':' -f 2`
			if [ "$USB_MODESWITCH_CMD" != "" ]; then
				ls /dev/ttyUSB* > /tmp/ms-devList
				sleep 3
				wwan_log "[$0] usb_modeswitch -v $VID -p $PID $USB_MODESWITCH_CMD"
				usb_modeswitch -I -Q -D -v $VID -p $PID $USB_MODESWITCH_CMD > /tmp/ms-report
				#sleep 7
			else
				wwan_log "[$0] no need WWAN to mode switch"
			fi
			wwan_log "[$0] mode switch case done"
			
		fi
	fi

##Add end
##################### insmod driver #####################
# in WWAN mode?
rm -rf $MATCH_WWAN_PACKAGE
$WWANPATH/wwan-package-match.sh TARGET $VID $PID $MATCH_WWAN_PACKAGE
if [ -f "$MATCH_WWAN_PACKAGE" ]; then
	echo "NEED_INSRET_DRIVER" > $DEVICE_STATUS_FILE
	wwan_log "[$0] need insert driver"

	# VMG1312 & VMG8324 & VMG8924
	cp $MATCH_WWAN_PACKAGE /tmp/

	DRIVER=`grep $WP_DRIVER_NAME $MATCH_WWAN_PACKAGE | tr -d '\r' | tr -d ' ' | cut -d ':' -f 2`
	echo "$DRIVER" > $DEVICE_DRIVER_FILE
	if [ "$DRIVER" = "usbserial" ]; then
			wwan_log "[$0] $SERIAL_MODULES/usbserial.ko vendor=0x$VID product=0x$PID"
##			wwan_log "[$0] $SERIAL_MODULES/usbserial.ko vendor=0x$VID product=0x$PID"
##			insmod $SERIAL_MODULES/usbserial.ko vendor=0x$VID product=0x$PID
			wwan_log "[$0] insmod usbserial"
			insmod $SERIAL_MODULES/usbserial.ko
			#wwan_log "[$0] insmod usb_wwan"
			#insmod $SERIAL_MODULES/usb_wwan.ko
			wwan_log "[$0] insmod option"
			insmod $SERIAL_MODULES/option.ko
		echo "$VID $PID" > /sys/bus/usb-serial/drivers/option1/new_id
		DEVICE_TYPE=tty
		DEVICE_NAME=ttyUSB
	elif [ "$DRIVER" = "option" -o "$DRIVER" = "sierra" ]; then
		if [ "$DRIVER_BUILD_IN" != "y" ]; then
			wwan_log "[$0] insmod usbserial"
			insmod $SERIAL_MODULES/usbserial.ko
			wwan_log "[$0] insmod $DRIVER"
			insmod $SERIAL_MODULES/$DRIVER.ko
		fi
		DRIVER="${DRIVER}1"
		DEVICE_TYPE=tty
		DEVICE_NAME=ttyUSB
	elif [ "$DRIVER" = "cdc-acm" ]; then
		if [ "$DRIVER_BUILD_IN" != "y" ] ; then
			wwan_log "[$0] insmod cdc-acm"
			insmod $CLASS_MODULES/cdc-acm.ko
		fi
		DEVICE_TYPE=tty
		DEVICE_NAME=ttyACM
	elif [ "$DRIVER" = "cdc-ecm" ]; then
			wwan_log "[$0] insmod cdc_ether"
			insmod $CDCETHER_MODULES/cdc_ether.ko
		DEVICE_TYPE=net
	elif [ "$DRIVER" = "rndis_host" ]; then
		if [ "$DRIVER_BUILD_IN" != "y" ]; then
			wwan_log "[$0] insmod usbnet"
			insmod $USBNET_MODULES/usbnet.ko
			wwan_log "[$0] insmod cdc_ether"
			insmod $USBNET_MODULES/cdc_ether.ko
			wwan_log "[$0] insmod rndis_host"
			insmod $USBNET_MODULES/rndis_host.ko
		fi
		DEVICE_TYPE=net
	elif [ "$DRIVER" = "hso" ]; then
		if [ "$DRIVER_BUILD_IN" != "y" ]; then
			wwan_log "[$0] insmod rfkill"
			insmod $RFKILL_MODULES/rfkill.ko
			wwan_log "[$0] insmod hso"
			insmod $USBNET_MODULES/hso.ko
		fi
		wwan_log "[$0] add \"$VID $PID\" to hso.ko"
		echo "$VID $PID" > /sys/bus/usb/drivers/hso/new_id
		DEVICE_TYPE=tty
		DEVICE_NAME=ttyHS
	elif [ "$DRIVER" = "qmi-wwan" ]; then
		if [ "$DRIVER_BUILD_IN" != "y" ]; then
			wwan_log "[$0] insmod usbnet"
			insmod $USBNET_MODULES/usbnet.ko
			wwan_log "[$0] insmod cdc-wdm"
			insmod $USBNET_MODULES/cdc-wdm.ko
			wwan_log "[$0] insmod qmi_wwan"
			insmod $CLASS_MODULES/qmi_wwan.ko
		fi
		DEVICE_TYPE=net
	elif [ "$DRIVER" = "lg-vl600" ]; then
		if [ "$DRIVER_BUILD_IN" != "y" ]; then
			wwan_log "[$0] insmod cdc-acm"
			insmod $CLASS_MODULES/cdc-acm.ko
			wwan_log "[$0] insmod $DRIVER"
			insmod /lib/modules/usbhost/$DRIVER.ko
		fi
	else
		echo "UNKNOWN_DRIVER" > $DEVICE_STATUS_FILE
		wwan_log "[$0] unknown driver $DRIVER"
		wwan_log "[$0] insert driver case interrupt, exit"
		exit
	fi
	
	wwan_log "[$0] insert driver case done, exit"
fi
	echo `date` " usb-modeswitch: All done, exiting" >> "$DEBUG_FILE"
	
done

# clean up
rm -f /tmp/usb-find-devices.$$

