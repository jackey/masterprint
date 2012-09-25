<?php
/**
 * Implements hook_form_FORM_ID_alter().
 */
function masterprint_form_install_configure_form_alter(&$form, $form_state) {
  $form['site_information']['site_name']['#default_value'] = 'Master Print';
  $form['update_notifications']['update_status_module']['#default_value'] = array(0 => 0, 1 => 0);
  $form['update_notifications']['#access'] = FALSE;
}
