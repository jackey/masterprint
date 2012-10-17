#!/usr/bin/env bash

drush si masterprint --locale=zh-hans --account-name=administrator --account-pass=administrator --site-name=Masterprint --db-url=mysql://root:root@localhost/masterprint -y

#drush si masterprint -y
