<?php

require_once DRUPAL_ROOT . '/profiles/masterprint/libraries/profile_helper/profile_helper.inc';

/**
 * Implements hook_form_FORM_ID_alter().
 */
function masterprint_form_install_configure_form_alter(&$form, $form_state) {
  $form['site_information']['site_name']['#default_value'] = 'Master Print';
  $form['update_notifications']['update_status_module']['#default_value'] = array(0 => 0, 1 => 0);
  $form['update_notifications']['#access'] = FALSE;
}

/**
 * Implements hook_install_tasks().
 */
function masterprin_install_tasks($install_state) {
  $tasks = array();
  $tasks['install_custom_configure'] = array(
    'display_name' => st('Other configurations'),
    'type' => 'batch',
  );
  return $tasks;
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function masterprin_form_install_configure_form_alter(&$form, $form_state) {
  // Site information.
  $form['site_information']['site_name']['#default_value'] = '';

  // Admin account.
  $form['admin_account']['account']['name']['#default_value'] = 'admin';

  // Server settings.
  $form['server_settings']['site_default_country']['#default_value'] = 'CN';
  $form['server_settings']['date_default_timezone']['#default_value'] = '';

  // Update notifications.
  $form['update_notifications']['update_status_module']['#default_value'] = array();

  // Disable validate.
  $form['#validate'] = array();

  // Don't let update status and notifications be enabled - security risk.
  // First, uncheck the boxes, then make inaccessible.
  $form['update_notifications']['update_status_module']['#default_value'] = array(0 => 0, 1 => 0);
  $form['update_notifications']['#access'] = FALSE;
}

/**
 * Task callback.
 */
function install_custom_configure(&$install_state) {
  $batch = array();
  $batch['title'] = st('Configuring @drupal', array('@drupal' => drupal_install_profile_distribution_name()));

  // Revert features.
  $batch['operations'][] = array('profile_helper_revert_features', array());
  $batch['operations'][] = array('profile_helper_flush_cache', array());

  // Create some dummy users for testing
  $batch['operations'][] = array('masterprint_profile_create_dummy_users', array());
  $batch['operations'][] = array('profile_helper_flush_cache', array());

  $batch['error_message'] = st('The configuration has encountered an error.');
  $batch['finished'] = 'install_custom_configure_finished';
  return $batch;
}

/**
 * Batch finished callback.
 */
function install_custom_configure_finished($success, $results, $operations) {
  drupal_flush_all_caches();
}

/**
 * Prepopulate some users
 */
function masterprint_profile_create_dummy_users() {
  $users =  array(
    '管理员' => array(
      array(
        'name' => 'admin',
        'pass' => 'admin',
      ),
      array(
        'name' => 'admin_two',
        'pass' => 'admin_two',
      ),
    ),
    'AE业务经理' => array(
      array(
        'name' => 'ae_one',
        'pass' => 'ae_one',
      ),
      array(
        'name' => 'ae_two',
        'pass' => 'ae_two',
      ),
      array(
        'name' => 'ae_three',
        'pass' => 'ae_three',
      ),
    ),
  );

  foreach ($users as $r_name => $users) {
    $role = user_role_load_by_name($r_name);
    if (empty($role)) continue;
    foreach ($users as $user) {
      $edit = array(
        'name' => $user['name'],
        'pass' => $user['pass'],
        'status' => 1,
        'language' => 'en',
        // Add role to user
        'roles' => array($role->rid => $role->name),
      );
      user_save(NULL, $edit);
    }
  }
}
