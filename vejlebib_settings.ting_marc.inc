<?php
/**
 * @file
 * vejlebib_settings.ting_marc.inc
 */

/**
 * Implements hook_default_ting_marc().
 */
function vejlebib_settings_default_ting_marc() {
  $export = array();

  $field = new stdClass();
  $field->disabled = FALSE; /* Edit this to true to make a default field disabled initially */
  $field->api_version = 1;
  $field->field_name = 'all_anvendelighed';
  $field->ting_type = 'All';
  $field->marc_field = '517';
  $field->marc_subfield = 'a';
  $field->marc_label = 'Anvendelighed';
  $export['all_anvendelighed'] = $field;

  $field = new stdClass();
  $field->disabled = FALSE; /* Edit this to true to make a default field disabled initially */
  $field->api_version = 1;
  $field->field_name = 'all_hvor';
  $field->ting_type = 'All';
  $field->marc_field = '565';
  $field->marc_subfield = 'a';
  $field->marc_label = 'Hvor';
  $export['all_hvor'] = $field;

  $field = new stdClass();
  $field->disabled = FALSE; /* Edit this to true to make a default field disabled initially */
  $field->api_version = 1;
  $field->field_name = 'all_let_tal';
  $field->ting_type = 'All';
  $field->marc_field = '046';
  $field->marc_subfield = 'c';
  $field->marc_label = 'Let-tal';
  $export['all_let_tal'] = $field;

  $field = new stdClass();
  $field->disabled = FALSE; /* Edit this to true to make a default field disabled initially */
  $field->api_version = 1;
  $field->field_name = 'all_lix_tal';
  $field->ting_type = 'All';
  $field->marc_field = '042';
  $field->marc_subfield = 'a';
  $field->marc_label = 'Lix-tal';
  $export['all_lix_tal'] = $field;

  $field = new stdClass();
  $field->disabled = FALSE; /* Edit this to true to make a default field disabled initially */
  $field->api_version = 1;
  $field->field_name = 'all_note';
  $field->ting_type = 'All';
  $field->marc_field = '856';
  $field->marc_subfield = 'z';
  $field->marc_label = 'Note';
  $export['all_note'] = $field;

  $field = new stdClass();
  $field->disabled = FALSE; /* Edit this to true to make a default field disabled initially */
  $field->api_version = 1;
  $field->field_name = 'cd_musik_529u';
  $field->ting_type = 'Cd (musik)';
  $field->marc_field = '529';
  $field->marc_subfield = 'u';
  $field->marc_label = '529.u';
  $export['cd_musik_529u'] = $field;

  return $export;
}
