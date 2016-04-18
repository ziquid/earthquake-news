#!/bin/bash

DRUSH=`which d7`
[ "$DRUSH" == "" ] && DRUSH=`which d6`
[ "$DRUSH" == "" ] && DRUSH=`which drush`

SCOPE=local
echo "$PWD" | grep -s -q htdocs && SCOPE=prod
echo "$PWD" | grep -s -q dev && SCOPE=dev

chmod ug+w sites/default
cp .gitignore gitignore
$DRUSH -y -q make gdg.make
mv gitignore .gitignore
$DRUSH -y en master features
echo enabling modules with a scope of $SCOPE
$DRUSH -y master-execute --scope=$SCOPE
$DRUSH -y fra
$DRUSH -y updb
# $DRUSH cc all
