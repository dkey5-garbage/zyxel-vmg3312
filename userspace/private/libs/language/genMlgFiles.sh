#!/bin/sh
$1/GenMLG txt . Common $2
$1/GenMLG txt . ConnStatus $2
$1/GenMLG txt . Maintenance $2
$1/GenMLG txt . Menu $2
$1/GenMLG txt . NAT $2
$1/GenMLG txt . Network $2
$1/GenMLG txt . QOS $2
$1/GenMLG txt . Security $2
$1/GenMLG txt . System $2
$1/GenMLG txt . WAN $2
$1/GenMLG txt . WLAN $2
$1/GenMLG txt . VoIP $2
$1/GenMLGExt languagesAuto Common ConnStatus Maintenance Menu NAT Network QOS Security System WAN WLAN VoIP
#$1/GenMLGExtByTemplate languagesAutoC.tmp languagesAuto.c voip common systemMonitor security network maintenance connectionStatus login
#$1/GenMLGExtByTemplate languagesAutoH.tmp languagesAuto.h voip common systemMonitor security network maintenance connectionStatus login
