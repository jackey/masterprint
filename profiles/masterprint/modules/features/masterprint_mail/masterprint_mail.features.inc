<?php
/**
 * @file
 * masterprint_mail.features.inc
 */

/**
 * Implements hook_views_api().
 */
function masterprint_mail_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_default_pet().
 */
function masterprint_mail_default_pet() {
  $items = array();
  $items['notify_client_on_delivery'] = entity_import('pet', '{
    "name" : "notify_client_on_delivery",
    "title" : "\\u4ed3\\u5e93\\u7ba1\\u7406\\u5458\\u53d1\\u51fa\\u4ea7\\u54c1\\u540e\\u81f4\\u5ba2\\u6237\\u63d0\\u9192\\u90ae\\u4ef6",
    "subject" : "Masterprint\\u4ea7\\u54c1\\u5df2\\u53d1\\u51fa",
    "mail_body" : "xxxx\\u4ea7\\u54c1\\u5df2\\u53d1\\u51fa\\uff0c\\u8bf7\\u6ce8\\u610f\\u3002sasa",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  $items['notify_on_nearly_out_of_stock'] = entity_import('pet', '{
    "name" : "notify_on_nearly_out_of_stock",
    "title" : "\\u5e93\\u5b58\\u544a\\u8b66\\u90ae\\u4ef6",
    "subject" : "\\u5e93\\u5b58\\u544a\\u8b66\\u90ae\\u4ef6",
    "mail_body" : "\\u5e93\\u5b58\\u544a\\u8b66\\u7684\\u90ae\\u4ef6",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  $items['notify_on_product_accepted'] = entity_import('pet', '{
    "name" : "notify_on_product_accepted",
    "title" : "\\u4ea7\\u54c1\\u88ab\\u5ba2\\u6237\\u901a\\u8fc7\\u90ae\\u4ef6",
    "subject" : "\\u4ea7\\u54c1\\u88ab\\u5ba2\\u6237\\u901a\\u8fc7\\u540e\\uff0c\\u53d1\\u9001\\u7684\\u90ae\\u4ef6",
    "mail_body" : "\\u4ea7\\u54c1\\u88ab\\u5ba2\\u6237\\u901a\\u8fc7\\u540e\\uff0c\\u53d1\\u9001\\u7684\\u90ae\\u4ef6",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  $items['notify_on_product_request'] = entity_import('pet', '{
    "name" : "notify_on_product_request",
    "title" : "\\u7ecf\\u9500\\u5546\\/\\u9500\\u552e\\u5458\\u7533\\u8bf7\\u4ea7\\u54c1\\u63d0\\u9192",
    "subject" : "\\u5173\\u4e8exx\\u4ea7\\u54c1\\u7533\\u8bf7",
    "mail_body" : "",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  $items['notify_requester_on_delivery'] = entity_import('pet', '{
    "name" : "notify_requester_on_delivery",
    "title" : "\\u4ed3\\u5e93\\u7ba1\\u7406\\u5458\\u53d1\\u51fa\\u4ea7\\u54c1\\u540e\\u81f4\\u4ea7\\u54c1\\u7533\\u8bf7\\u4eba\\u90ae\\u4ef6",
    "subject" : "Masterprint\\u4ea7\\u54c1\\u5df2\\u53d1\\u51fa",
    "mail_body" : "\\u4ed3\\u5e93\\u7ba1\\u7406\\u5458\\u53d1\\u51fa\\u4ea7\\u54c1\\u540e\\uff0c\\u7ed9\\u4ea7\\u54c1\\u7533\\u8bf7\\u4eba\\u53d1\\u7684\\u90ae\\u4ef6",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  $items['notify_stock_keeper_on_product_added'] = entity_import('pet', '{
    "name" : "notify_stock_keeper_on_product_added",
    "title" : "\\u4ea7\\u54c1\\u88ab\\u6dfb\\u52a0\\u540e\\u81f4\\u4ed3\\u5e93\\u7ba1\\u7406\\u5458\\u90ae\\u4ef6",
    "subject" : "\\u5f53\\u4ea7\\u54c1\\u88ab\\u6dfb\\u52a0\\u540e\\uff0c\\u53d1\\u7ed9\\u4ed3\\u5e93\\u7ba1\\u7406\\u5458\\u7684\\u90ae\\u4ef6",
    "mail_body" : "\\u5f53\\u4ea7\\u54c1\\u88ab\\u6dfb\\u52a0\\u540e\\uff0c\\u53d1\\u7ed9\\u4ed3\\u5e93\\u7ba1\\u7406\\u5458\\u7684\\u90ae\\u4ef6",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  return $items;
}
