#!/bin/sh
OPTION="$1"
INPUTFILE="$2"
OUTPUTFILE="$3"

PROGRAM=`basename $0`

OPENSSL=openssl
CAT=cat
RM=rm

PASSWD=N3z0y93

#####################################################################################################
# usage
usage()
{
	echo ""
	echo "Copyright (C) ZyXEL Communications, Corp. All Rights Reserved."
	echo "Usage: $PROGRAM [option] [input filename] [output filename]"
	echo "$PROGRAM: A Simple Script to Encrypt/Decrypt file using openssl"
	echo "option : e [Encrypt],  d [Decrypt]"
	echo "Examples:"
	echo "  $PROGRAM e /var/pdm/config.rom /tmp/config.enc"
	echo ""
	exit 1
}

filenotfound()
{
	echo "Error! Input file not found."
	exit 1
}

optnotfound()
{
	echo "Error! Option not support."
	echo "option : e [Encrypt],  d [Decrypt]"
	exit 1
}
#####################################################################################################

test -n "$OPTION" || usage
test -n "$INPUTFILE" || usage
test -n "$OUTPUTFILE" || usage
test -e "$INPUTFILE" || filenotfound

case $OPTION in
	"e")
		$OPENSSL enc -e -des3 -pass pass:$PASSWD -in $INPUTFILE -out $OUTPUTFILE
		;;
	"d")
		$OPENSSL enc -d -des3 -pass pass:$PASSWD -in $INPUTFILE -out $OUTPUTFILE
		;;
	*)
		optnotfound;
		;;
esac
exit 0
