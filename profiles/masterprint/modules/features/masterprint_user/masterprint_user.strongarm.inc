<?php
/**
 * @file
 * masterprint_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function masterprint_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'masterprint_user_password_change_roles';
  $strongarm->value = array(
    6 => '6',
    8 => '8',
    2 => 0,
    4 => 0,
    9 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
  );
  $export['masterprint_user_password_change_roles'] = $strongarm;

  return $export;
}
