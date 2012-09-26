<?php
/**
 * @file
 * masterprint_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function masterprint_settings_user_default_roles() {
  $roles = array();

  // Exported role: account executive.
  $roles['account executive'] = array(
    'name' => 'account executive',
    'weight' => '3',
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: customer.
  $roles['customer'] = array(
    'name' => 'customer',
    'weight' => '5',
  );

  // Exported role: dealer.
  $roles['dealer'] = array(
    'name' => 'dealer',
    'weight' => '7',
  );

  // Exported role: salesman.
  $roles['salesman'] = array(
    'name' => 'salesman',
    'weight' => '6',
  );

  // Exported role: stock keeper.
  $roles['stock keeper'] = array(
    'name' => 'stock keeper',
    'weight' => '4',
  );

  return $roles;
}
