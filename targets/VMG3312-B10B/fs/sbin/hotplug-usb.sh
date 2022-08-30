#!/bin/sh

#set -x
set +v
PREFIX_PATH="/var"
STATUS_FILE=$PREFIX_PATH"/etc/3g-status"
DRIVER_STATUS_FILE=$PREFIX_PATH"/etc/driver-status"
DEBUG_FILE="/tmp/3g-hotplug.debug"
ADAPTER_FILE=$PREFIX_PATH"/etc/adapter"
LOCK="/tmp/hotplug-usb.lock"
WIMAX_LOCK="/tmp/hotplug-wimax.lock"
HOTPLUGINFO_FILE="/tmp/hotplug-add-remove.out"

DISABLE_HOTPLUG="/tmp/disable-hotplug"
CELLD_READY_FILE="/tmp/celld_ready"
USB_HOTPLUG_EVENT="/tmp/hotplug-usb_event"
USBINFO_FILE="/tmp/usb-get-ids.out"
DEVICE_DATA_PRENAME=wwan_dev
DATAPATH=/var/wwan # set WWAN output files's directory path
DELAY_DRIVER=3

if [ -f "$DISABLE_HOTPLUG" ]; then
    echo `date` " hotplug-usb: hotplug disabled, exit" >> "$DEBUG_FILE"
    exit
fi

if [ ! -f "$CELLD_READY_FILE" ]; then
    echo "usb hotplug event" > "$USB_HOTPLUG_EVENT"
    echo `date` " hotplug-usb: celld is not ready, exit" >> "$DEBUG_FILE"
    exit
fi

rm -f $USB_HOTPLUG_EVENT

echo "==================================================" >> "$DEBUG_FILE"

mount -t usbfs usbfs /proc/bus/usb/
sleep $DELAY_DRIVER

echo $ACTION | grep -q add
if [ $? -eq 0 ] || [ "$1" == "add" ]; then
    echo `date` " hotplug-usb: Add "  >> "$DEBUG_FILE"

    if [ -f "$LOCK" ]; then
        echo `date` " hotplug-usb: Add has be lock, exit "  >> "$DEBUG_FILE"
        exit
    fi
    echo `date` "" > "$LOCK"
    echo `date` " hotplug-usb: $$ hotplug.lock"  >> "$DEBUG_FILE"

    /sbin/3g.sh

    rm -rf $LOCK

    echo `date` " hotplug-usb: Add done " >> "$DEBUG_FILE"
    echo "" >> "$DEBUG_FILE"
    echo "------------------------------------------------" >> "$DEBUG_FILE"
fi

echo $ACTION | grep -q remove
if [ $? -eq 0 ] || [ "$1" == "remove" ]; then
        echo `date` " hotplug-usb: Remove "  >> "$DEBUG_FILE"

	# release the lock
	VID=`head -2 $USBINFO_FILE | tail -1`
    PID=`head -3 $USBINFO_FILE | tail -1`
	DEVICE_NUMBER=`head -4 $USBINFO_FILE | tail -1`
    DEVICE_ID=$DEVICE_NUMBER:$VID:$PID
    DEVICE_DIR=$DATAPATH/$DEVICE_DATA_PRENAME:$DEVICE_ID
    if lsusb | grep "^${VID}:${PID}" ; then
	echo "==================${VID}:${PID}===========" >> "$DEBUG_FILE"
	   exit
    fi	
	rm $STATUS_FILE
	rm $DRIVER_STATUS_FILE
	rm $ADAPTER_FILE

	rm -f $USB_HOTPLUG_EVENT
	rm -f /tmp/ms-configList
	rm -f /tmp/usb-get-ids.out
	rm -f /tmp/sys-bus-usb-devices
	rm -f /tmp/usb-find-devices

	sleep $DELAY_DRIVER

	rmmod option
	rmmod sierra
	rmmod usbserial
	rmmod lg-vl600
	rmmod cdc-acm
	rmmod hso
	rmmod cdc_ether
	echo `date` " hotplug-usb: $$ release hotplug.lock" >> $DEBUG_FILE
	rm -rf $LOCK
	rm -rf $DEVICE_DIR
	echo `date` " hotplug-usb: Remove done " >> "$DEBUG_FILE"
	echo "" >> "$DEBUG_FILE"
	echo "------------------------------------------------" >> "$DEBUG_FILE"

	exit
fi

echo `date` " hotplug-usb: DONE " >> "$DEBUG_FILE"


