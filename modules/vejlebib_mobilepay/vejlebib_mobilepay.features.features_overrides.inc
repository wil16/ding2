<?php
/**
 * @file
 * vejlebib_mobilepay.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function vejlebib_mobilepay_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|content|new-d585c901-9325-4fb7-a03c-9e80ba097509"] = (object) array(
      'pid' => 'new-d585c901-9325-4fb7-a03c-9e80ba097509',
      'panel' => 'main_content',
      'type' => 'block',
      'subtype' => 'vejlebib_mobilepay-vejlebib_mobilepay_info',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => 'd585c901-9325-4fb7-a03c-9e80ba097509',
    );
  $overrides["page_manager_pages.user_debts.default_handlers|page_user_debts_panel_context|conf|display|panels|main_content|3"] = 'new-d585c901-9325-4fb7-a03c-9e80ba097509';

 return $overrides;
}
