<?php
/**
 * @file
 * vejlebib_settings.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function vejlebib_settings_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'developement';
  $environment->name = 'Developement';
  $environment->regexurl = 'dev.vejlebib.dk';
  $environment->settings = array(
    'color' => '#D600D6',
    'text_color' => '#ffffff',
    'weight' => '0',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['developement'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'local_developement';
  $environment->name = 'Local developement';
  $environment->regexurl = '(\\.dev)';
  $environment->settings = array(
    'color' => '#aa3333',
    'text_color' => '#ffffff',
    'weight' => '98',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['local_developement'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'production';
  $environment->name = 'Production';
  $environment->regexurl = 'vejlebib.dk';
  $environment->settings = array(
    'color' => '#000000',
    'text_color' => '#ffffff',
    'weight' => '2',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['production'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'staging';
  $environment->name = 'Staging';
  $environment->regexurl = 'stg.vejlebib.dk';
  $environment->settings = array(
    'color' => '#a38700',
    'text_color' => '#ffffff',
    'weight' => '1',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['staging'] = $environment;

  return $export;
}
