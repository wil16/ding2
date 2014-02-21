<?php
/**
 * @file
 * vejlebib_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vejlebib_settings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_mailchimp_list().
 */
function vejlebib_settings_default_mailchimp_list() {
  $items = array();
  $items['cb_nyhedsbrev'] = entity_import('mailchimp_list', '{
    "name" : "cb_nyhedsbrev",
    "mc_list_id" : "a51c674e74",
    "label" : "CB-nyhedsbrev",
    "description" : "",
    "settings" : {
      "roles" : [],
      "mergefields" : { "EMAIL" : "mail", "FNAME" : "name", "LNAME" : "" },
      "mergefields_display" : { "EMAIL" : true, "FNAME" : 0, "LNAME" : 0 },
      "doublein" : 0,
      "show_register_form" : 1,
      "default_register_form_optin" : 0,
      "show_account_form" : 1,
      "form_label" : "Tilmeld dig CB-nyhedsbrevet",
      "submit_label" : "Submit",
      "include_interest_groups" : 0,
      "opt_in_interest_groups" : 0,
      "interest_groups_label" : "Interest Groups",
      "cron" : 0,
      "webhooks" : 0,
      "allow_anonymous" : 0,
      "required" : 0
    }
  }');
  $items['nyheder_fra_vejle_bibliotekerne'] = entity_import('mailchimp_list', '{
    "name" : "nyheder_fra_vejle_bibliotekerne",
    "mc_list_id" : "399444734b",
    "label" : "Nyheder fra Vejle Bibliotekerne",
    "description" : "",
    "settings" : {
      "roles" : { "2" : 2, "5" : 5, "6" : 6, "8" : 8, "3" : 3, "7" : 7, "4" : 4 },
      "mergefields" : { "EMAIL" : "mail", "FNAME" : "name", "LNAME" : "" },
      "mergefields_display" : { "EMAIL" : true, "FNAME" : 0, "LNAME" : 0 },
      "doublein" : 0,
      "show_register_form" : 1,
      "default_register_form_optin" : 0,
      "show_account_form" : 1,
      "form_label" : "Abonn\\u00e9r p\\u00e5 nyhedsbrevet Nyheder fra Vejle Bibliotekerne",
      "submit_label" : "Submit",
      "include_interest_groups" : 0,
      "opt_in_interest_groups" : 0,
      "interest_groups_label" : "Interest Groups",
      "cron" : 0,
      "webhooks" : 0,
      "allow_anonymous" : 0,
      "required" : 0
    }
  }');
  return $items;
}
