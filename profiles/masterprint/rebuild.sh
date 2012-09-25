#!/bin/bash
# This script is used to refresh drupal projects using drush.
# author: kurtzhong520@gmail.com
# date: 09/26/2012

# Replace core
replace_drupal_core() {
    CORE_TEMP_DIR="drush_make_temp_core";
    rm -rf $CORE_TEMP_DIR;
    drush make masterprint_core.make drush_make_temp_core;

    if [ ! -d $CORE_TEMP_DIR ]; then
      echo "Fail to fetch drupal core into the temp direcotory.";
      return 1;
    fi;

    echo -e "Replacing the core...\r";
    DIRS="includes misc modules profiles/minimal profiles/standard profiles/testing scripts themes";
    for DIR in $DIRS; do
      rm -rf "../../$DIR";
    done;

    cp -R $CORE_TEMP_DIR/* ../../;
    cp -R $CORE_TEMP_DIR/.htaccess ../../;
    rm -rf $CORE_TEMP_DIR;
    echo -e "Finished replace the core.\r";
    return 0;
}

# Replace non-core
replace_drupal_non_core () {
    NON_CORE_TEMP_DIR="drush_make_temp_non_core";
    drush make --no-core --contrib-destination=$NON_CORE_TEMP_DIR --force-complete masterprint.make -y;

    if [ ! -d $NON_CORE_TEMP_DIR ]; then
      echo "Fetching projects failed.";
      return 1;
    fi;

    echo -e "Replacing projects...\c";

    for PROJECT_TYPE in `ls $NON_CORE_TEMP_DIR`; do
      if [ ! -d "./$PROJECT_TYPE" ]; then
         mkdir -p "./$PROJECT_TYPE";
      fi;

      for PROJECT in `ls "$NON_CORE_TEMP_DIR/$PROJECT_TYPE"`; do
        rm -rf "./$DIR/$PROJECT";
        cp -R "$NON_CORE_TEMP_DIR/$PROJECT_TYPE/$PROJECT" "./$PROJECT_TYPE/";
        echo -e ".\c";
      done;
    done;
    rm -rf $NON_CORE_TEMP_DIR;
    echo "\nReplace non-core projects finished.";
    return 0;
}

# Replace both core and non-core
replace_drupal_whole () {
  replace_drupal_core
  replace_drupal_non_core
}

# Options array
declare -a options
options[${#options[*]}]="Replace the core";
options[${#options[*]}]="Replace the non-core";
options[${#options[*]}]="Replace both.";
options[${#options[*]}]="Cancel.";

echo "Simple project rebuilder";
PS3='Please enter your choice: '
select opt in "${options[@]}"; do
    case "$REPLY" in
        1) echo "You choose to replace the Drupal core.";
            replace_drupal_core;
            break;;
        2) echo "You choose to replace the non-core part.";
            replace_drupal_non_core;
            break;;
        3) echo "you chose to replace the whole project";
            replace_drupal_whole;
            break;;
        4) echo "Goodbye!"; break;;
        *) echo "Invalid option. Try another one.";continue;;
    esac
done

exit;
    if [ ! -d temp_all ]; then
      echo "Failed.";
      exit;
    fi;
    echo -e "Replacing all...\c";
    for DIR in `ls temp_all`; do
      if [ ! -d "./$DIR" ]; then
         mkdir -p "./$DIR";
      fi;
      for SUB_DIR in `ls "temp_all/$DIR"`; do
        if [ -d "./$DIR/$SUB_DIR" ]; then
           rm -rf "./$DIR/$SUB_DIR";
        fi;
        cp -R "temp_all/$DIR/$SUB_DIR" "./$DIR/";
        echo -e ".\c";
      done;
    done;
    rm -rf temp_all;
    echo "done.";
    ;;
esac
