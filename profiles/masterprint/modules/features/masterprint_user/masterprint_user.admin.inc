<?php

/**
 * Setting form
 */
function masterprint_user_password_change_settings() {
  $roles = array_map('check_plain', user_roles(TRUE));
  $form['masterprint_user_password_change_roles'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Roles that need to change password on first login'),
    '#default_value' => variable_get('masterprint_user_password_change_roles', array()),
    '#options' => $roles,
  );
  return system_settings_form($form);
}
