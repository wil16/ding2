<?php
/**
 * @file
 * Admin page callbacks for the Vejlebib settings module.
 */

function vejlebib_settings_google_site_verification_settings($form, &$form_state) {
	$form['google_site_verification_enable'] = array(
	  '#type' => 'checkbox',
	  '#title' => t('Google site verification'),
	  '#description' => t('Enable/disbale Google site verification.'),
	  '#default_value' => variable_get('google_site_verification_enable', FALSE),	
	);
	$form['google_site_verification_key'] = array(
		'#type' => 'textfield',
		'#title' => t('Google site verification key'),
		'#description' => t('The Google site verification key to use in meta-tag.'),
		'#default_value' => variable_get('google_site_verification_key', ''),
	);
	return system_settings_form($form);
}

function vejlebib_settings_webtrends_settings_form($form, $form_state) {
	global $base_url;
	
  $form['vejlebib_webtrends_domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Hostname (fpcdom)'),
    '#description' => t('The hostname of the tracked site, without subdomain, inserts fpcdom value.'),
    '#default_value' => variable_get('vejlebib_webtrends_domain', $base_url),
  );
  $form['vejlebib_webtrends_onsitedoms'] = array(
    '#type' => 'textfield',
    '#title' => t('Hostname (onsitedoms)'),
    '#description' => t('The hostname(s) of on-site domains, inserts onsitedoms value.'),
    '#default_value' => variable_get('vejlebib_webtrends_onsitedoms'),
  );
  $form['vejlebib_webtrends_dcs_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Site ID'),
    '#description' => t('The site identification key.'),
    '#default_value' => variable_get('vejlebib_webtrends_dcs_id', ''),
  );

  // Clear JS cache to ensure the news version is used.
  $form['#submit'][] = 'drupal_clear_js_cache';

  return system_settings_form($form);	
}
