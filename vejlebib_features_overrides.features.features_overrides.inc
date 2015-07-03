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

  // Exported overrides for: field_group
  $overrides["field_group.group_holdings_available|ting_object|ting_object|default.data|format_settings|formatter"] = 'collapsible';

  // Exported overrides for: field_instance
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.required"] = 1;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.required"] = 1;

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-be085b97-4329-4521-8dba-fe6a07fe59b0"] = (object) array(
      'pid' => 'new-be085b97-4329-4521-8dba-fe6a07fe59b0',
      'panel' => 'main_content',
      'type' => 'bibliotek_dk_link',
      'subtype' => 'bibliotek_dk_link',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'argument_string_1',
        'override_title' => 0,
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
      'uuid' => 'be085b97-4329-4521-8dba-fe6a07fe59b0',
    );
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
      'position' => 7,
      'locks' => array(),
      'uuid' => 'e2418d10-4e53-4050-b1dd-fa8275589cc9',
    );
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|panels|main_content|6"] = 'new-be085b97-4329-4521-8dba-fe6a07fe59b0';
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|panels|main_content|7"] = 'new-e2418d10-4e53-4050-b1dd-fa8275589cc9';

  // Exported overrides for: variable
  $overrides["variable.ding_varnish_content_types.value|ding_eresource"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_event"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_group"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_inspiration_list"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_library"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_news"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_page"] = 0;
  $overrides["variable.ding_varnish_content_types.value|genre_page"] = 0;
  $overrides["variable.ding_varnish_content_types.value|new_materials"] = 0;
  $overrides["variable.ding_varnish_content_types.value|webform"] = 0;
  $overrides["variable.ding_varnish_paths.value"] = '';

  // Exported overrides for: views_view
  $overrides["views_view.ding_news.display|ding_news_frontpage_list|display_options|fields|field_ding_news_list_image|settings|image_style"] = 'vejlebib_list';
  $overrides["views_view.ding_news.display|ding_news_frontpage_list|display_options|fields|field_ding_news_list_image|settings|styles"]["DELETED"] = TRUE;
  $overrides["views_view.ding_news.display|ding_news_frontpage_list|display_options|fields|field_ding_news_list_image|type"]["DELETED"] = TRUE;

 return $overrides;
}
