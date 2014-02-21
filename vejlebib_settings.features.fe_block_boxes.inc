<?php
/**
 * @file
 * vejlebib_settings.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function vejlebib_settings_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer adresse';
  $fe_block_boxes->format = 'ding_wysiwyg';
  $fe_block_boxes->machine_name = 'footer_adresse';
  $fe_block_boxes->body = '<p>Vejle Bibliotekerne - Willy Sørensens Plads 1 - 7100 Vejle - tlf 7681&nbsp;3200 - <a href="mailto:vejlebib@vejlebib.dk">vejlebib@vejlebib.dk</a></p>';

  $export['footer_adresse'] = $fe_block_boxes;

  return $export;
}
