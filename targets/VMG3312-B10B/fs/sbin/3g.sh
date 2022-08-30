#!/bin/sh

#set -x
set +v
PREFIX_PATH="/var"
#MODESWITCH_LIST=$PREFIX_PATH"/etc_ro/mwr/3g-modeswitch"
#SUPPORTDEV_LIST=$PREFIX_PATH"/etc_ro/mwr/3g-devices"
SUPPORTDEV_LIST=$PREFIX_PATH"/etc/wwan/3g-devices"
STATUS_FILE=$PREFIX_PATH"/etc/3g-status"
ADAPTER_FILE=$PREFIX_PATH"/etc/adapter"
USBINFO_FILE="/tmp/usb-get-ids.out"

# Chia: 
LOCK=/tmp/3g.lock
DRIVER_STATUS_FILE=$PREFIX_PATH"/etc/driver-status"
DEBUG_FILE="/tmp/3g-hotplug.debug"
# Chia: end

DELAY_MODESWITCH=5
DELAY_DRIVER=3
DELAY_SCAN=1

MODESWITCH="no"

#MODEL=`nvram_get 2860 ModelName`
# I-Wei:
MODEL="Compro"
# I-Wei: end

# Wei:
KERNEL_VERSION="`uname -r`"
SERIAL_MODULES="/lib/modules/$KERNEL_VERSION/kernel/drivers/usb/serial"
CLASS_MODULES="/lib/modules/$KERNEL_VERSION/kernel/drivers/usb/class"
CDCETHER_MODULES="/lib/modules/$KERNEL_VERSION/kernel/drivers/net/usb"

#mount -t usbfs usbfs /proc/bus/usb/
#sleep $DELAY_DRIVER
# Wei: end

# extract USB info
#source /sbin/usb-get-ids.sh /proc/bus/usb/devices
/sbin/usb-get-ids.sh /proc/bus/usb/devices
MWRUSBPort=`head -1 $USBINFO_FILE | tail -1`
MWRUSBVendor=`head -2 $USBINFO_FILE | tail -1`
MWRUSBProdID=`head -3 $USBINFO_FILE | tail -1`
DEVICE_NUMBER=`head -4 $USBINFO_FILE | tail -1`
CLASS=`head -5 $USBINFO_FILE | tail -1`
VID=$MWRUSBVendor
PID=$MWRUSBProdID
echo `date` " 3g: Port " "$MWRUSBPort" " Vendor " "$MWRUSBVendor" " ProdID " "$MWRUSBProdID" >> "$DEBUG_FILE"
if [ "$MWRUSBVendor" == "12d1" -a "$MWRUSBProdID" == "1f16" ]; then
    insmod $CDCETHER_MODULES/cdc_ether.ko
fi
# prune the hotplug debug file
if [ -e $DEBUG_FILE ]; then
    dbg_l=`cat $DEBUG_FILE | wc -l`
    echo `date` " 3g: debug file before length is $dbg_l" >> $DEBUG_FILE
    if [ $dbg_l -gt 200 ]; then
	echo `date` " 3g: prune debug file" >> $DEBUG_FILE
	cat $DEBUG_FILE | tail -200 > /tmp/3g-hotplug.tmp
	cp -f /tmp/3g-hotplug.tmp $DEBUG_FILE
    fi
    dbg_l=`cat $DEBUG_FILE | wc -l`
fi

if [ -e $STATUS_FILE ] ; then
	rm $STATUS_FILE
fi
if [ -e $DRIVER_STATUS_FILE ]; then
	rm $DRIVER_STATUS_FILE
fi
if [ -e $ADAPTER_FILE ]; then
	rm $ADAPTER_FILE
fi

# initialize
rmmod option  >& /dev/null
rmmod sierra >& /dev/null
rmmod usbserial >& /dev/null
rmmod lg-vl600 >& /dev/null
rmmod cdc-acm >& /dev/null
rmmod hso >& /dev/null
#Yetties 2010.02.10: remove previous smartphone files
if [ -e /var/smartphone ] ; then
	rm /var/smartphone
	rm $PREFIX_PATH/etc/link
	# don't delete rndis_tethering file here.
fi
sleep $DELAY_DRIVER

# zte temporary hack
for zte in `seq 1 3` ; do

if [ -e /tmp/rndis_tethering ] ; then
	echo `date` " 3g: (Smartphone) skip modeswitch" >> "$DEBUG_FILE"
else
	#Makefile will decide use which sh by profile
	if [ -e /sbin/wwan-usb-modeswitch.sh ] ; then
		echo `date` " 3g: new wwan-usb-modeswitch" >> "$DEBUG_FILE"
		/sbin/wwan-usb-modeswitch.sh $DEVICE_NUMBER $VID $PID
	else
		echo `date` " 3g: new usb-modeswitch" >> "$DEBUG_FILE"
		/sbin/usb-modeswitch.sh $DEVICE_NUMBER $VID $PID
	fi
	echo `date` " 3g: mode switch done" >> "$DEBUG_FILE"
fi

echo `date` " $$ 3g: lsusb 1 = `lsusb`" >> $DEBUG_FILE
lsusb | grep "19d2:0103"
if [ $? -eq 0 ]; then
    # mf112 switch failed, retry
    continue
else
    echo `date` " $$ 3g: lsusb 2 = `lsusb`" >> $DEBUG_FILE
    lsusb | grep "19d2:2000"
    if [ $? -eq 0 ]; then
        # mf100 switch failed, retry
	continue
    else
	# none of above, don't retry
	break
    fi
fi
done
# zte temporary hack
DEVICE_DATA_PRENAME=wwan_dev
DATAPATH=/var/wwan # set WWAN output files's directory path
DEVICE_ID=$DEVICE_NUMBER:$VID:$PID
DEVICE_DIR=$DATAPATH/$DEVICE_DATA_PRENAME:$DEVICE_ID
DRIVER="`cat $DEVICE_DIR/dev_driver`"
MODEM_P=""
OPERATOR=""
MODEM_O=""
MODEM_F=""

#MWAN_DEV="`nvram_get 2860 wan_3g_dev`"
#MWAN_MODE="`nvram_get 2860 default_mobile_mode`"
# I-Wei:
MWAN_DEV=""
MWAN_MODE="3G_ONLY"
# I-Wei: end

# Chia: get mobile wan connection mode
#MWAN1_MODE="`nvram_get 2860 wanConnectionMode`"
#MWAN2_MODE="`nvram_get 2860 wan2ConnectionMode`"
# Chia: end

# I-Wei:
MWAN1_MODE="DHCP"
MWAN2_MODE="MWAN"
# I-Wei: end

# use the specified adapter's info if given, otherwise auto-detect
if [ "$MWAN_DEV" = "" ] ; then
	ADAPTER="autodetect"
else
	if [ "`grep "$MWAN_DEV" $SUPPORTDEV_LIST | wc -l`" = "1" ] ; then
		ADAPTER="$MWAN_DEV"
		VEND_ID=`grep "$MWAN_DEV" $SUPPORTDEV_LIST | cut -d ' ' -f 1`
		PROD_ID=`grep "$MWAN_DEV" $SUPPORTDEV_LIST | cut -d ' ' -f 2`
		DRIVER=`grep "$MWAN_DEV" $SUPPORTDEV_LIST | cut -d ' ' -f 4`
		MODEM_P=`grep "$MWAN_DEV" $SUPPORTDEV_LIST | cut -d ' ' -f 5`
		OPERATOR=`grep "$MWAN_DEV" $SUPPORTDEV_LIST | cut -d ' ' -f 6`
		MODEM_O=`grep "$MWAN_DEV" $SUPPORTDEV_LIST | cut -d ' ' -f 7`
	else
		ADAPTER="autodetect"
	fi
fi

# determine the vendor and product ID of the actual hardware device
if [ "$ADAPTER" = "autodetect" ] ; then
	#Yetties:2010.04.02 Scan for Smartphone RNDIS device
	if [ -e /tmp/rndis_tethering ] ; then
		echo `date` " 3g: (Smartphone) RNDIS device found" >> "$DEBUG_FILE"
		DRIVER="rndis"
		MODEM_P="noscan"
		OPERATOR="gsm_or_cdma"
	else
		# determine the number of USB devices currently attached
#		NUM_USB=`cat /proc/bus/usb/devices | tail -n +2 | sed -e "s/^$/@@@/" | xargs | sed -e "s/@@@ /\n/g" | wc -l`

		# scan through each USB device and determine if it's supported
#		for i in `seq 1 $NUM_USB` ; do
		for i in `lsusb | cut -d ' ' -f 1` ; do
#			ID_LINE=`cat /proc/bus/usb/devices | tail -n +2 | sed -e "s/^$/@@@/;s/$/|||/" | xargs | sed -e "s/@@@||| /\n/g" | head -n $i | tail -n 1 | sed -e "s/||| /\n/g" | grep ProdID`
#			VEND_ID=`echo $ID_LINE | cut -d ' ' -f 2 | cut -d '=' -f 2`
#			PROD_ID=`echo $ID_LINE | cut -d ' ' -f 3 | cut -d '=' -f 2`
			VEND_ID=`echo $i | cut -d ':' -f 1`
			PROD_ID=`echo $i | cut -d ':' -f 2`

			if [ `grep "^$VEND_ID $PROD_ID" $SUPPORTDEV_LIST | wc -l` -ge 1 ] ; then
				DRIVER=`grep "^$VEND_ID $PROD_ID" $SUPPORTDEV_LIST | head -n 1 | cut -d ' ' -f 4`
				MODEM_P=`grep "^$VEND_ID $PROD_ID" $SUPPORTDEV_LIST | head -n 1 | cut -d ' ' -f 5`
				OPERATOR=`grep "^$VEND_ID $PROD_ID" $SUPPORTDEV_LIST | head -n 1 | cut -d ' ' -f 6`
				MODEM_O=`grep "^$VEND_ID $PROD_ID" $SUPPORTDEV_LIST | head -n 1 | cut -d ' ' -f 7`
				break
			fi
		done
	fi

	if [ "x$DRIVER" = "x" -o "x$MODEM_P" = "x" -o "x$OPERATOR" = "x" ] ; then
#		echo "No supported devices found" > $STATUS_FILE
#		3g-led.sh ERROR_CONFIGURE
#		exit 1
		MODEM_P="ttyUSB"
		OPERATOR="unknown"
	fi
else
	if lsusb | grep "^${VEND_ID}:${PROD_ID}" ; then
		# selected vendor and product ID match the physical device
		:
	else
		# check if there are any devices from the same vendor
		if [ "`lsusb | grep "^$VEND_ID" | wc -l`" = "1" ] ; then
			PROD_ID=`lsusb | grep "^$VEND_ID" | cut -d ' ' -f 1 | cut -d ':' -f 2`
		else
			# it's time to take a wild guess
			if [ "`lsusb | grep -v "^0000:0000" wc -l`" = "0" ] ; then
				# no non-hub devices found, giving up
				echo "No adapters found" > $STATUS_FILE
#I-Wei#				3g-led.sh ERROR_CONFIGURE
				exit 1
			else
				# just use the first non-hub device for now
				VEND_ID=`lsusb | grep -v "^0000:0000" | cut -d ' ' -f 1 | cut -d ':' -f 1`
				PROD_ID=`lsusb | grep -v "^0000:0000" | cut -d ' ' -f 1 | cut -d ':' -f 2`
			fi
		fi
	fi
fi

echo `date` " 3g: device table look up done" >> "$DEBUG_FILE"

# extract USB info
#source /sbin/usb-get-ids.sh /proc/bus/usb/devices
/sbin/usb-get-ids.sh /proc/bus/usb/devices
MWRUSBPort=`head -1 $USBINFO_FILE | tail -1`
MWRUSBVendor=`head -2 $USBINFO_FILE | tail -1`
MWRUSBProdID=`head -3 $USBINFO_FILE | tail -1`
echo `date` " 3g: Port " "$MWRUSBPort" " Vendor " "$MWRUSBVendor" " ProdID " "$MWRUSBProdID" >> "$DEBUG_FILE"
VEND_ID="$MWRUSBVendor"
PROD_ID="$MWRUSBProdID"
# Chia: end

3g-log.sh "Mobile WAN adapter detected: `usb-get-name.sh ${VEND_ID}:${PROD_ID}` (${VEND_ID}:${PROD_ID})"


echo `date` " 3g: load driver done" >> "$DEBUG_FILE"
