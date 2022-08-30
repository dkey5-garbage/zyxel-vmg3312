#!/bin/sh
#echo "zyims.sh ENTER"
# Media Management
 test -e /bin/mm.exe && /bin/mm.exe &
 test -e /bin/mm.exe && sleep 5
 test -e /bin/icf.exe && /bin/icf.exe & 

#echo "zyims.sh EXIT"

exit	
