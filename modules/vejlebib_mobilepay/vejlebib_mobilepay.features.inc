<?php
/**
 * @file
 * vejlebib_mobilepay.features.inc
 */

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function vejlebib_mobilepay_default_page_manager_pages_alter(&$data) {
  if (isset($data['user_debts'])) {
    $data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->content['new-d585c901-9325-4fb7-a03c-9e80ba097509'] = (object) array(
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
        ); /* WAS: '' */
    $data['user_debts']->default_handlers['page_user_debts_panel_context']->conf['display']->panels['main_content'][3] = 'new-d585c901-9325-4fb7-a03c-9e80ba097509'; /* WAS: '' */
  }
}
