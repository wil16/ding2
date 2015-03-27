<?php
/**
 * @file
 * vejlebib_features_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function vejlebib_features_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-e2418d10-4e53-4050-b1dd-fa8275589cc9"] = (object) array(
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
    );
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|panels|main_content|6"] = 'new-e2418d10-4e53-4050-b1dd-fa8275589cc9';

 return $overrides;
}
