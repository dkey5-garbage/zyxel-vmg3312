#!/bin/sh

# $1: DEFAULT or TARGET
# $2: VID
# $3: PID
# $4: output file
# $5: input file

# WWANPATH: WWAN scripts's directory path
# DATAPATH: WWAN output files's directory path
# RUN_WWAN_PACKAGE: run_wwanpackage file path

#set -x

ID_TYPE=$1
if [ "$ID_TYPE" != "DEFAULT" -a "$ID_TYPE" != "TARGET" -a "$ID_TYPE" != "default" -a "$ID_TYPE" != "target" ]; then
	echo "[$0] ID_TYPE=$ID_TYPE; must to enter \"DEFAULT\" or \"default\" or \"TARGET\" or \"target\"" > /dev/console
	exit
fi
VID=$2
PID=$3
if [ "$VID" = "" -o "$PID" = "" ]; then
	echo "[$0] VID=$VID, PID=$PID; can't find VID or PID" > /dev/console
	exit
fi
VID=$(printf "%04x\n" "0x$VID")
PID=$(printf "%04x\n" "0x$PID")

if [ "$4" != "" ]; then
	MATCH_WWAN_PACKAGE=$4
else
	MATCH_WWAN_PACKAGE=/tmp/match_wwanpackage:$VID:$PID
fi

if [ "$5" != "" ]; then
	RUN_WWAN_PACKAGE=$5
else
	if [ -s /var/wwan/run_wwanpackage ]; then
		RUN_WWAN_PACKAGE=/var/wwan/run_wwanpackage
	else
		RUN_WWAN_PACKAGE=/etc/wwan/run_wwanpackage #~!@#$%^&*()_+
	fi
fi

#echo "[$0] RUN_WWAN_PACKAGE $RUN_WWAN_PACKAGE" > /dev/console

WP_DEFAULT_VID_NAME=DEFAULT_VID
WP_DEFAULT_PID_NAME=DEFAULT_PID
WP_TARGET_VID_NAME=TARGET_VID
WP_TARGET_PID_NAME=TARGET_PID

SEARCH_ID_NAME=DEFAULT
SEARCH_VID_NAME=$WP_DEFAULT_VID_NAME
SEARCH_PID_NAME=$WP_DEFAULT_PID_NAME
if [ "$ID_TYPE" = "TARGET" -o "$ID_TYPE" = "target" ]; then
	SEARCH_ID_NAME=TARGET
	SEARCH_VID_NAME=$WP_TARGET_VID_NAME
	SEARCH_PID_NAME=$WP_TARGET_PID_NAME
fi

rm -rf $MATCH_WWAN_PACKAGE

VID_LIST=`grep -n $SEARCH_VID_NAME $RUN_WWAN_PACKAGE | grep "\<$VID\>" | tr -d '\r' | cut -d ':' -f 1`
if [ "$VID_LIST" = "" ]; then
	echo "[$0] VID $VID no match, exit" > /dev/console
	exit
fi

PID_LIST=`grep -n $SEARCH_PID_NAME $RUN_WWAN_PACKAGE | grep "\<$PID\>" | tr -d '\r' | cut -d ':' -f 1`
if [ "$PID_LIST" = "" ]; then
	echo "[$0] PID $PID no match, exit" > /dev/console
	exit
fi

# find VID and PID are match simultaneously
vid_cnt=`echo "$VID_LIST" | wc -l`
if [ "$vid_cnt" -gt "0" ]; then
	for i in `seq 1 $vid_cnt`; do
		VID_ROW=`echo "$VID_LIST" | head -$i | tail -1`
		PID_ROW=`echo "$PID_LIST" | grep "\<$(($VID_ROW + 1))\>" | tr -d '\r'`
###		if [ "$PID_ROW" != "" ]; then
		if [ "$PID_ROW" = "$(($VID_ROW + 1))" ]; then
			break
		fi
		PID_ROW=""
	done
fi

if [ "$PID_ROW" = "" ]; then
	echo "[$0] no matching data, exit" > /dev/console
	exit
fi

SECTION_RANGE=`grep -n "^\s*$" $RUN_WWAN_PACKAGE | tr -d '\r' | cut -d ':' -f 1`
section_cnt=`echo "$SECTION_RANGE" | wc -l`
for i in `seq 1 $section_cnt`; do
	SECTION_ROW=`echo "$SECTION_RANGE" | head -$i | tail -1`
	if [ "$SECTION_ROW" -gt "$VID_ROW" ]; then
#		echo "[$0] BLINE $SECTION_ROW is OK" > /dev/console
		break
	fi
done

if [ "$SECTION_ROW" -lt "$VID_ROW" ]; then
	SECTION_ROW=`cat $RUN_WWAN_PACKAGE | wc -l`
fi

cat $RUN_WWAN_PACKAGE | head -$(($SECTION_ROW - 1)) | tail -$(($SECTION_ROW - $VID_ROW)) > $MATCH_WWAN_PACKAGE
#echo "[$0] $SEARCH_ID_NAME data capture finish" > /dev/console