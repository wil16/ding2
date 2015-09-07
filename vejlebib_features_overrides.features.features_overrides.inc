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
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-37d18c98-64ec-448f-ac62-ad0cc199fe06"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-803a4c6a-e633-4507-88b1-0f061d84a298"] = (object) array(
      'pid' => 'new-803a4c6a-e633-4507-88b1-0f061d84a298',
      'panel' => 'header',
      'type' => 'wayf_dk_login',
      'subtype' => 'wayf_dk_login',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'icon' => 'UK_01.png',
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 5,
      'locks' => array(),
      'uuid' => '803a4c6a-e633-4507-88b1-0f061d84a298',
    );
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-a26c9eef-5076-4e88-8327-3ca9a3acd38f"] = (object) array(
      'pid' => 'new-a26c9eef-5076-4e88-8327-3ca9a3acd38f',
      'panel' => 'header',
      'type' => 'block',
      'subtype' => 'menu_block-information_menu_block',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => 'a26c9eef-5076-4e88-8327-3ca9a3acd38f',
    );
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-b45d93a7-545d-43bb-bfcd-ff1726a0dcfb"] = (object) array(
      'pid' => 'new-b45d93a7-545d-43bb-bfcd-ff1726a0dcfb',
      'panel' => 'header',
      'type' => 'block',
      'subtype' => 'vejlebib_views_panels-vejlebib-ding-userinfo',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 1,
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
      'uuid' => 'b45d93a7-545d-43bb-bfcd-ff1726a0dcfb',
    );
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-d9c1432b-77cc-432c-987a-eb64569a0b88"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-ee547b2e-6dfb-4d6c-a0c9-1851b3dfd0fc"] = (object) array(
      'pid' => 'new-ee547b2e-6dfb-4d6c-a0c9-1851b3dfd0fc',
      'panel' => 'header',
      'type' => 'block',
      'subtype' => 'ding_opening_hours-oho-lib-today',
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
      'position' => 2,
      'locks' => array(),
      'uuid' => 'ee547b2e-6dfb-4d6c-a0c9-1851b3dfd0fc',
    );
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-f87605e1-1c3f-4108-9e89-7f5ac1810ff4"] = (object) array(
      'pid' => 'new-f87605e1-1c3f-4108-9e89-7f5ac1810ff4',
      'panel' => 'header',
      'type' => 'ding_wayf_dk_create_user',
      'subtype' => 'ding_wayf_dk_create_user',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'icon' => NULL,
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
      'uuid' => 'f87605e1-1c3f-4108-9e89-7f5ac1810ff4',
    );
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|header|2"] = 'new-ee547b2e-6dfb-4d6c-a0c9-1851b3dfd0fc';
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|header|3"] = 'new-b45d93a7-545d-43bb-bfcd-ff1726a0dcfb';
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|header|4"] = 'new-a26c9eef-5076-4e88-8327-3ca9a3acd38f';
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|header|5"] = 'new-803a4c6a-e633-4507-88b1-0f061d84a298';
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|header|6"] = 'new-f87605e1-1c3f-4108-9e89-7f5ac1810ff4';

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-1235d134-3c15-4d11-86e4-a48f9c8737b3"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-803af3cd-d614-46cf-98ba-6b21fb5ad7ac"] = (object) array(
      'pid' => 'new-803af3cd-d614-46cf-98ba-6b21fb5ad7ac',
      'panel' => 'tertiary',
      'type' => 'views_panes',
      'subtype' => 'vejlebib_ding_event-vejlebib_ding_event_list',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'empty',
        ),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '803af3cd-d614-46cf-98ba-6b21fb5ad7ac',
    );
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-b14f0ccc-f81c-4267-b843-2fd333f260f8"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|panels|tertiary|0"] = 'new-803af3cd-d614-46cf-98ba-6b21fb5ad7ac';
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|panels|tertiary|1"]["DELETED"] = TRUE;

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
