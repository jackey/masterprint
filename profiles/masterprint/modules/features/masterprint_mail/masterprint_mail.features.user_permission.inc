<?php
/**
 * @file
 * masterprint_mail.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function masterprint_mail_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer previewable email templates.
  $permissions['administer previewable email templates'] = array(
    'name' => 'administer previewable email templates',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pet',
  );

  // Exported permission: manage mail templates.
  $permissions['manage mail templates'] = array(
    'name' => 'manage mail templates',
    'roles' => array(
      0 => 'administrator',
      1 => '管理员',
    ),
    'module' => 'masterprint_mail',
  );

  // Exported permission: use previewable email templates.
  $permissions['use previewable email templates'] = array(
    'name' => 'use previewable email templates',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pet',
  );

  return $permissions;
}
