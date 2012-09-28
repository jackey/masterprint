<?php
/**
 * @file
 * masterprint_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function masterprint_settings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function masterprint_settings_default_profile2_type() {
  $items = array();
  $items['admin'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "admin",
    "label" : "Masterprint\\u7ba1\\u7406\\u5458",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  $items['ae'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "ae",
    "label" : "AE\\u4e1a\\u52a1\\u7ecf\\u7406",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  $items['client'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "client",
    "label" : "\\u5ba2\\u6237",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  $items['dealer'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "dealer",
    "label" : "\\u5ba2\\u6237\\u7ecf\\u9500\\u5546",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  $items['salesman'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "salesman",
    "label" : "\\u5ba2\\u6237\\u9500\\u552e\\u4eba\\u5458",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  $items['stock_keeper'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "stock_keeper",
    "label" : "\\u4ed3\\u50a8\\u7ba1\\u7406\\u5458",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  return $items;
}
