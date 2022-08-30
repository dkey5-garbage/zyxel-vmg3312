#!/bin/sh
# process watchdog. This program will check processes status and
# restart processes if a process is not running, or status is zombie,

################## Watchdog start #############################^M

icfstatus=`pidof -k icf.exe`
vastatus=`pidof -k voiceApp`
mmstatus=`pidof -k mm.exe`
#echo $icfstatus
#echo $vastatus

# Since we use ps and grep to check if a process is running,
# we need to check if the grep result is the grep process itself
# status="" means the process is not running
# status=Z means the process becoming zombie
if [ "$icfstatus" = "0" ] || [ "$vastatus" = "0" ] || [ "$mmstatus" = "0" ]; then
	echo "VoIP process die"
  echo "1"  >> /var/voip_restart
fi
exit


