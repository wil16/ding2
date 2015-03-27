<?php
/**
 * @file
 * vejlebib_features_overrides.features.inc
 */

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function vejlebib_features_overrides_default_page_manager_handlers_alter(&$data) {
  if (isset($data['search_ting_search_panel_context'])) {
    $data['search_ting_search_panel_context']->conf['display']->content['new-e2418d10-4e53-4050-b1dd-fa8275589cc9'] = (object) array(
          'pid' => 'new-e2418d10-4e53-4050-b1dd-fa8275589cc9',
          'panel' => 'main_content',
          'type' => 'zerohit_form',
          'subtype' => 'zerohit_form',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'type' => 'ting_search',
            'webform_id' => 3054,
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 6,
          'locks' => array(),
          'uuid' => 'e2418d10-4e53-4050-b1dd-fa8275589cc9',
        ); /* WAS: '' */
    $data['search_ting_search_panel_context']->conf['display']->panels['main_content'][6] = 'new-e2418d10-4e53-4050-b1dd-fa8275589cc9'; /* WAS: '' */
  }
}
