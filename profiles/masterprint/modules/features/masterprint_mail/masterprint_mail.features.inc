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
  $items['account_created_notify_for_admin'] = entity_import('pet', '{
    "name" : "account_created_notify_for_admin",
    "title" : "\\u7ba1\\u7406\\u5458\\u8d26\\u6237\\u521b\\u5efa\\u5b8c\\u6210\\u81f4\\u8be5\\u7ba1\\u7406\\u5458\\u63d0\\u9192\\u90ae\\u4ef6",
    "subject" : "Masterprint\\u7cfb\\u7edf\\u7ba1\\u7406\\u5458\\u8d26\\u6237\\u5f00\\u901a\\u90ae\\u4ef6",
    "mail_body" : "\\u5c0a\\u656c\\u7684Master\\u7ba1\\u7406\\u5458\\uff0c\\u60a8\\u597d\\uff1a\\r\\n\\r\\n\\u6b22\\u8fce\\u60a8\\u4f7f\\u7528Masterprint\\u7cfb\\u7edf\\uff01\\u60a8\\u7684\\u8d26\\u53f7\\u5df2\\u7ecf\\u521b\\u5efa\\u597d:\\r\\n\\r\\n\\u8d26\\u6237\\u90ae\\u7bb1\\uff1a[user:mail]\\r\\n\\u8d26\\u6237\\u540d\\u79f0\\uff1a[user:name]\\r\\n\\u8d26\\u6237\\u5bc6\\u7801\\uff1a[user:password]\\r\\n\\r\\n\\u8bf7\\u8bbf\\u95ee [site:login-url] \\u767b\\u9646\\u7cfb\\u7edf\\u3002\\r\\n\\r\\n\\u5982\\u679c\\u60a8\\u65e0\\u6cd5\\u76f4\\u63a5\\u70b9\\u51fb\\u94fe\\u63a5\\uff0c\\u8bf7\\u5c06\\u94fe\\u63a5\\u5730\\u5740\\u590d\\u5236\\u5230\\u6d4f\\u89c8\\u5668\\u5730\\u5740\\u680f\\u540e\\u8bbf\\u95ee\\u3002",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "shanghai@hf-ps.com",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  $items['account_created_notify_for_ae'] = entity_import('pet', '{
    "name" : "account_created_notify_for_ae",
    "title" : "AE\\u8d26\\u6237\\u521b\\u5efa\\u5b8c\\u6210\\u81f4\\u8be5AE\\u63d0\\u9192\\u90ae\\u4ef6",
    "subject" : "Masterprint\\u7cfb\\u7edfAE\\u8d26\\u6237\\u5f00\\u901a\\u90ae\\u4ef6",
    "mail_body" : "\\u5c0a\\u656c\\u7684MasterPrint\\u7ecf\\u7406\\uff0c\\u60a8\\u597d\\uff1a\\r\\n\\r\\n\\u6b22\\u8fce\\u60a8\\u4f7f\\u7528Masterprint\\u7cfb\\u7edf\\uff01\\u60a8\\u7684\\u8d26\\u53f7\\u5df2\\u7ecf\\u521b\\u5efa\\u597d:\\r\\n\\r\\n\\u8d26\\u6237\\u90ae\\u7bb1\\uff1a[user:mail]\\r\\n\\u8d26\\u6237\\u540d\\u79f0\\uff1a[user:name]\\r\\n\\u8d26\\u6237\\u5bc6\\u7801\\uff1a[user:password]\\r\\n\\r\\n\\u8bf7\\u8bbf\\u95ee [site:login-url] \\u767b\\u9646\\u7cfb\\u7edf\\u3002\\r\\n\\r\\n\\u5982\\u679c\\u60a8\\u65e0\\u6cd5\\u76f4\\u63a5\\u70b9\\u51fb\\u94fe\\u63a5\\uff0c\\u8bf7\\u5c06\\u94fe\\u63a5\\u5730\\u5740\\u590d\\u5236\\u5230\\u6d4f\\u89c8\\u5668\\u5730\\u5740\\u680f\\u540e\\u8bbf\\u95ee\\u3002",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "shanghai@hf-ps.com",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  $items['account_created_notify_for_client'] = entity_import('pet', '{
    "name" : "account_created_notify_for_client",
    "title" : "\\u5ba2\\u6237\\u521b\\u5efa\\u5b8c\\u6210\\u81f4\\u5ba2\\u6237\\u63d0\\u9192\\u90ae\\u4ef6",
    "subject" : "Masterprint\\u5ba2\\u6237\\u8d26\\u6237\\u5f00\\u901a\\u90ae\\u4ef6",
    "mail_body" : "\\u5c0a\\u656c\\u7684Master\\u5ba2\\u6237\\uff0c\\u60a8\\u597d\\uff1a\\r\\n\\r\\n\\u6b22\\u8fce\\u60a8\\u4f7f\\u7528Masterprint\\u7cfb\\u7edf\\uff01\\u60a8\\u7684\\u8d26\\u53f7\\u5df2\\u7ecf\\u521b\\u5efa\\u597d:\\r\\n\\r\\n\\u8d26\\u6237\\u90ae\\u7bb1\\uff1a[user:mail]\\r\\n\\u8d26\\u6237\\u540d\\u79f0\\uff1a[user:name]\\r\\n\\u8d26\\u6237\\u5bc6\\u7801\\uff1a[user:password]\\r\\n\\r\\n\\u8bf7\\u8bbf\\u95ee [site:login-url] \\u767b\\u9646\\u7cfb\\u7edf\\u3002\\r\\n\\r\\n\\u60a8\\u53ef\\u4ee5\\u9009\\u62e9\\u4f7f\\u7528\\u8d26\\u6237\\u90ae\\u7bb1\\u6216\\u8005\\u540d\\u79f0\\u767b\\u9646\\uff0c\\u9996\\u6b21\\u767b\\u9646\\u7cfb\\u7edf\\u9700\\u8981\\u4fee\\u6539\\u5bc6\\u7801\\u3002\\r\\n\\u5982\\u679c\\u60a8\\u65e0\\u6cd5\\u76f4\\u63a5\\u70b9\\u51fb\\u94fe\\u63a5\\uff0c\\u8bf7\\u5c06\\u94fe\\u63a5\\u5730\\u5740\\u590d\\u5236\\u5230\\u6d4f\\u89c8\\u5668\\u5730\\u5740\\u680f\\u540e\\u8bbf\\u95ee\\u3002",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "shanghai@hf-ps.com",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  $items['account_created_notify_for_client_dealer'] = entity_import('pet', '{
    "name" : "account_created_notify_for_client_dealer",
    "title" : "\\u5ba2\\u6237\\u7ecf\\u9500\\u5546\\u8d26\\u6237\\u521b\\u5efa\\u5b8c\\u6210\\u81f4\\u8be5\\u5ba2\\u6237\\u7ecf\\u9500\\u5546\\u63d0\\u9192\\u90ae\\u4ef6",
    "subject" : "Masterprint\\u7cfb\\u7edf\\u5ba2\\u6237\\u7ecf\\u9500\\u5546\\u8d26\\u6237\\u5f00\\u901a\\u90ae\\u4ef6",
    "mail_body" : "\\u5c0a\\u656c\\u7684Master\\u5ba2\\u6237\\u7ecf\\u9500\\u5546\\uff0c\\u60a8\\u597d\\uff1a\\r\\n\\r\\n\\u6b22\\u8fce\\u60a8\\u4f7f\\u7528Masterprint\\u7cfb\\u7edf\\uff01\\u60a8\\u7684\\u8d26\\u53f7\\u5df2\\u7ecf\\u521b\\u5efa\\u597d:\\r\\n\\r\\n\\u8d26\\u6237\\u90ae\\u7bb1\\uff1a[user:mail]\\r\\n\\u8d26\\u6237\\u540d\\u79f0\\uff1a[user:name]\\r\\n\\u8d26\\u6237\\u5bc6\\u7801\\uff1a[user:password]\\r\\n\\r\\n\\u8bf7\\u8bbf\\u95ee [site:login-url] \\u767b\\u9646\\u7cfb\\u7edf\\u3002\\r\\n\\r\\n\\u60a8\\u53ef\\u4ee5\\u9009\\u62e9\\u4f7f\\u7528\\u8d26\\u6237\\u90ae\\u7bb1\\u6216\\u8005\\u540d\\u79f0\\u767b\\u9646\\uff0c\\u9996\\u6b21\\u767b\\u9646\\u7cfb\\u7edf\\u9700\\u8981\\u4fee\\u6539\\u5bc6\\u7801\\u3002\\r\\n\\u5982\\u679c\\u60a8\\u65e0\\u6cd5\\u76f4\\u63a5\\u70b9\\u51fb\\u94fe\\u63a5\\uff0c\\u8bf7\\u5c06\\u94fe\\u63a5\\u5730\\u5740\\u590d\\u5236\\u5230\\u6d4f\\u89c8\\u5668\\u5730\\u5740\\u680f\\u540e\\u8bbf\\u95ee\\u3002",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "shanghai@hf-ps.com",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  $items['account_created_notify_for_client_salesman'] = entity_import('pet', '{
    "name" : "account_created_notify_for_client_salesman",
    "title" : "\\u5ba2\\u6237\\u9500\\u552e\\u8d26\\u6237\\u521b\\u5efa\\u5b8c\\u6210\\u81f4\\u8be5\\u5ba2\\u6237\\u9500\\u552e\\u63d0\\u9192\\u90ae\\u4ef6",
    "subject" : "Masterprint\\u7cfb\\u7edf\\u5ba2\\u6237\\u9500\\u552e\\u4eba\\u5458\\u8d26\\u6237\\u5f00\\u901a\\u90ae\\u4ef6",
    "mail_body" : "\\u5c0a\\u656c\\u7684Master\\u5ba2\\u6237\\u9500\\u552e\\u5458\\uff0c\\u60a8\\u597d\\uff1a\\r\\n\\r\\n\\u6b22\\u8fce\\u60a8\\u4f7f\\u7528Masterprint\\u7cfb\\u7edf\\uff01\\u60a8\\u7684\\u8d26\\u53f7\\u5df2\\u7ecf\\u521b\\u5efa\\u597d:\\r\\n\\r\\n\\u8d26\\u6237\\u90ae\\u7bb1\\uff1a[user:mail]\\r\\n\\u8d26\\u6237\\u540d\\u79f0\\uff1a[user:name]\\r\\n\\u8d26\\u6237\\u5bc6\\u7801\\uff1a[user:password]\\r\\n\\r\\n\\u8bf7\\u8bbf\\u95ee [site:login-url] \\u767b\\u9646\\u7cfb\\u7edf\\u3002\\r\\n\\r\\n\\u60a8\\u53ef\\u4ee5\\u9009\\u62e9\\u4f7f\\u7528\\u8d26\\u6237\\u90ae\\u7bb1\\u6216\\u8005\\u540d\\u79f0\\u767b\\u9646\\uff0c\\u9996\\u6b21\\u767b\\u9646\\u7cfb\\u7edf\\u9700\\u8981\\u4fee\\u6539\\u5bc6\\u7801\\u3002\\r\\n\\u5982\\u679c\\u60a8\\u65e0\\u6cd5\\u76f4\\u63a5\\u70b9\\u51fb\\u94fe\\u63a5\\uff0c\\u8bf7\\u5c06\\u94fe\\u63a5\\u5730\\u5740\\u590d\\u5236\\u5230\\u6d4f\\u89c8\\u5668\\u5730\\u5740\\u680f\\u540e\\u8bbf\\u95ee\\u3002",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "shanghai@hf-ps.com",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  $items['notify_client_on_delivery'] = entity_import('pet', '{
    "name" : "notify_client_on_delivery",
    "title" : "\\u4ed3\\u5e93\\u7ba1\\u7406\\u5458\\u53d1\\u51fa\\u4ea7\\u54c1\\u540e\\u81f4\\u5ba2\\u6237\\u63d0\\u9192\\u90ae\\u4ef6",
    "subject" : "Masterprint\\u4ea7\\u54c1\\u5df2\\u53d1\\u51fa",
    "mail_body" : "\\u5c0a\\u656c\\u7684\\u5ba2\\u6237\\uff0c\\r\\n\\r\\n\\u60a8\\u7684xx\\u4ea7\\u54c1\\u5df2\\u53d1\\u51fa\\uff0c\\u6570\\u91cf\\u4e3axx\\u3002\\r\\n\\r\\n\\u8c22\\u8c22\\uff0c\\r\\n\\r\\n\\u534e\\u65b9\\u5370\\u52a1",
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
    "subject" : "\\u8981\\u6c42\\u7684\\u4ea7\\u54c1\\u5df2\\u5ba1\\u6279",
    "mail_body" : "\\u5c0a\\u656c\\u7684\\u4ed3\\u5e93\\u7ba1\\u7406\\u5458\\uff0c\\r\\n\\r\\n\\u60a8\\u6709\\u65b0\\u7684\\u4ea7\\u54c1[node:title]\\u9700\\u8981\\u51fa\\u8d27\\r\\n\\r\\n\\u8fdb\\u5165: [site:url]\\/warehousr_manager\\/[apply:id]\\/ensure\\/key \\u8fdb\\u884c\\u53d1\\u8d27\\u64cd\\u4f5c.\\r\\n\\r\\n\\u8c22\\u8c22.\\r\\n\\r\\n\\u534e\\u65b9\\u5370\\u52a1",
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
    "subject" : "\\u4ea7\\u54c1\\u7533\\u8bf7\\u63d0\\u793a",
    "mail_body" : "\\u5c0a\\u656c\\u7684\\u5ba2\\u6237\\uff0c\\u60a8\\u597d\\uff0c\\r\\n\\r\\n\\u60a8\\u6709\\u672a\\u5ba1\\u6279\\u7684\\u4ea7\\u54c1\\u7533\\u8bf7\\uff0c\\u8bf7\\u767b\\u5f55\\u7cfb\\u7edf\\u5ba1\\u6279\\u4ea7\\u54c1\\u7533\\u8bf7\\u3002\\r\\n\\r\\n\\u8c22\\u8c22\\uff0c\\r\\n\\r\\n\\u534e\\u65b9\\u5370\\u52a1",
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
    "mail_body" : "\\u5c0a\\u656c\\u7684\\u4ed3\\u5e93\\u7ba1\\u7406\\u5458\\uff1a\\r\\n\\r\\n\\u60a8\\u6709\\u65b0\\u7684\\u4ea7\\u54c1\\u9700\\u8981\\u5165\\u5e93: [node:title]\\r\\n\\r\\n\\u8be6\\u60c5: [site:url]\\/node\\/[node:nid]\\r\\n",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  $items['notify_warehouse_when_product_insert'] = entity_import('pet', '{
    "name" : "notify_warehouse_when_product_insert",
    "title" : "\\u5f53\\u4ea7\\u54c1\\u88ab\\u6dfb\\u52a0\\u540e\\u901a\\u77e5\\u4ed3\\u5e93\\u7ba1\\u7406\\u5458",
    "subject" : "\\u65b0\\u7684\\u4ea7\\u54c1\\u9700\\u8981\\u5165\\u5e93",
    "mail_body" : "\\u5c0a\\u656c\\u7684\\u4ed3\\u5e93\\u7ba1\\u7406\\u5458:\\r\\n\\r\\n\\u60a8\\u6709\\u65b0\\u7684\\u4ea7\\u54c1: [node:title] \\u9700\\u8981\\u5165\\u5e93\\r\\n\\r\\n\\u8be6\\u60c5: [site:url]\\/node\\/[node:nid]",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  return $items;
}
