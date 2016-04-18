#!/bin/bash

DRUSH=`which d7`
[ "$DRUSH" == "" ] && DRUSH=`which d6`
[ "$DRUSH" == "" ] && DRUSH=`which drush`

SCOPE=local
echo "$PWD" | grep -s -q htdocs && SCOPE=prod
echo "$PWD" | grep -s -q dev && SCOPE=dev

chmod ug+w sites/default
$DRUSH -y -q make gdg.make
$DRUSH -y en master features
$DRUSH -y master-execute --scope=$SCOPE
$DRUSH -y fra
$DRUSH -y updb
$DRUSH cc all
