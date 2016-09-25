<?php
/**
 * @file
 * vejlebib_settings.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function vejlebib_settings_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'vejlebib_all_staff_list';
  $queue->label = 'Vejlebib all staff list';
  $queue->language = 'da';
  $queue->handler = 'simple';
  $queue->target_type = 'user';
  $queue->settings = array(
    'target_bundles' => array(),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['vejlebib_all_staff_list'] = $queue;

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'vejlebib_library_staff_list';
  $queue->label = 'Vejlebib library staff list';
  $queue->language = 'da';
  $queue->handler = 'simple';
  $queue->target_type = 'user';
  $queue->settings = array(
    'target_bundles' => array(),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['vejlebib_library_staff_list'] = $queue;

  return $export;
}
