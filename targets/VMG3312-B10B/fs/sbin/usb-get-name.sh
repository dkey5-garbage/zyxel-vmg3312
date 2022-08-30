#!/bin/sh

#set -x
set +v

if [ "x$1" = "x" ] ; then
	echo "Usage: `basename $0` <vid>:<pid>"
	exit 1
fi

VID=`echo $1 | cut -d ':' -f 1`
PID=`echo $1 | cut -d ':' -f 2`

cat /proc/bus/usb/devices | grep -A 2 "Vendor=${VID}.*ProdID=${PID}" > /tmp/usb-name

MANU="`cat /tmp/usb-name | grep Manufacturer | cut -d '=' -f 2`"
PROD="`cat /tmp/usb-name | grep Product | cut -d '=' -f 2`"

if [ "x$MANU" != "x" ] ; then
	echo -n "$MANU "
fi
echo "$PROD"

rm -f /tmp/usb-name

exit 0
