#!/usr/bin/env bash

LOG_PATH="/var/log"

APACHE_LOG=$LOG_PATH/apache2
MYSQL_LOG=$LOG_PATH/mysql

SYS_LOG=$LOG_PATH

cd /home/`whoami`/
PWD=`pwd`

zip -r $PWD/apache_log.`date +%Y%m%d`.zip $APACHE_LOG/
rm -rf APACHE_LOG/*
zip -r $PWd/mysql_log.`date +%Y%m%d`.zip $MYSQL_LOG/

zip -r $PWD/sys_log.`date +%Y%m%d`.zip $SYS_LOG

# TODO: Email them