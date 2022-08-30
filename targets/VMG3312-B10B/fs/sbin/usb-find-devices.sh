#!/bin/sh
# parse the file and find the device according to class
# input file is /sys/bus/usb/devices
# output file is /tmp/usb-find-devices 
# + 05 find all devices with class == 5
# - 09 find all devices with class != 9
# hub has bDeviceClass=09

#set -x
set +v
rm -f /tmp/usb-find-devices
touch /tmp/usb-find-devices

cd /sys/bus/usb/devices
ls > /tmp/sys-bus-usb-devices

cnt=`cat /tmp/sys-bus-usb-devices | wc -l`

for i in `seq 1 $cnt` ; do
    dir=`cat /tmp/sys-bus-usb-devices | head -$i | tail -1`
	
	# I-Wei only use *-1 [start]
	#echo $dir | grep -q "\-1"
    #if [ $? -ne 0 ]; then
	# only use *-1
	#continue
    #fi
	# I-Wei only use *-1 [end]
	
    echo $dir | grep -q ":"
    if [ $? -eq 0 ]; then
	# ignore 1-x.y.z...:1.0
	continue
    fi
    echo $dir | grep -q "usb"
    if [ $? -eq 0 ]; then
	# ignore usb*
	continue
    fi

    class="`cat $dir/bDeviceClass`"
    echo $1 | grep -q "+"
    if [ $? -eq 0 ]; then
	# find devices by class
	if [ "$class" == "$2" ]; then
	    # found
	    echo "/sys/bus/usb/devices/$dir" >> /tmp/usb-find-devices
	fi
    else
	# filter devices by class 
	if [ "$class" != "$2" ]; then
	    # found
	    echo "/sys/bus/usb/devices/$dir" >> /tmp/usb-find-devices
	fi
    fi
done

