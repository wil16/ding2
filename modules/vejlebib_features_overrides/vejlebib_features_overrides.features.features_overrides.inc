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

  // Exported overrides for: field_instance
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.required"] = 1;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.required"] = 1;

  // Exported overrides for: page_manager_handlers
  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_view_panel_context_4.conf|display|content|new-0c1b010b-aad2-4a5e-badd-f2fe5334a80c|position"] = 2;
  $overrides["page_manager_handlers.node_view_panel_context_4.conf|display|content|new-0d732c8e-6a2e-4993-ba6f-7cb2025bada6|position"] = 3;
  $overrides["page_manager_handlers.node_view_panel_context_4.conf|display|content|new-1db24070-7658-41fd-abae-0b705dfe8845"] = (object) array(
      'pid' => 'new-1db24070-7658-41fd-abae-0b705dfe8845',
      'panel' => 'left_sidebar',
      'type' => 'block',
      'subtype' => 'menu_block-menu_block_secondary',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 1,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '1db24070-7658-41fd-abae-0b705dfe8845',
    );
  $overrides["page_manager_handlers.node_view_panel_context_4.conf|display|content|new-a5810ddf-717b-4560-a63a-1ec30c14060a"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_view_panel_context_4.conf|display|content|new-b2afcfd3-6561-4a08-9b5d-f493ac9c3938|position"] = 1;
  $overrides["page_manager_handlers.node_view_panel_context_4.conf|display|content|new-c857a1ef-6bb2-4f95-94ae-d176d79a7265"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_view_panel_context_4.conf|display|panels|left_sidebar|0"] = 'new-1db24070-7658-41fd-abae-0b705dfe8845';
  $overrides["page_manager_handlers.node_view_panel_context_4.conf|display|panels|left_sidebar|1"] = 'new-b2afcfd3-6561-4a08-9b5d-f493ac9c3938';
  $overrides["page_manager_handlers.node_view_panel_context_4.conf|display|panels|left_sidebar|2"] = 'new-0c1b010b-aad2-4a5e-badd-f2fe5334a80c';
  $overrides["page_manager_handlers.node_view_panel_context_4.conf|display|panels|left_sidebar|3"] = 'new-0d732c8e-6a2e-4993-ba6f-7cb2025bada6';
  $overrides["page_manager_handlers.node_view_panel_context_4.conf|display|panels|left_sidebar|4"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_view_panel_context_5.conf|display|content|new-162f6ba7-45ad-44f3-8ef6-5302990b1842"] = (object) array(
      'pid' => 'new-162f6ba7-45ad-44f3-8ef6-5302990b1842',
      'panel' => 'main_content',
      'type' => 'views_panes',
      'subtype' => 'vejlebib_ding_event-vejlebib_ding_event_groups_list',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'argument_entity_id:node_1',
        ),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_id' => '',
        'css_class' => 'ding-group-events',
      ),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '162f6ba7-45ad-44f3-8ef6-5302990b1842',
    );
  $overrides["page_manager_handlers.node_view_panel_context_5.conf|display|content|new-3bc42ce7-ca5f-4e5c-9176-2bcbaecc961a"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_view_panel_context_5.conf|display|panels|main_content|2"] = 'new-162f6ba7-45ad-44f3-8ef6-5302990b1842';
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-37d18c98-64ec-448f-ac62-ad0cc199fe06"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-e0e21892-3602-4e8f-8598-3dd63b46b76a"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-21663aca-ac35-4ab2-b5d9-6369ccb7e63d"] = (object) array(
      'pid' => 'new-21663aca-ac35-4ab2-b5d9-6369ccb7e63d',
      'panel' => 'footer',
      'type' => 'block',
      'subtype' => 'gtranslate-gtranslate',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 1,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 6,
      'locks' => array(),
      'uuid' => '21663aca-ac35-4ab2-b5d9-6369ccb7e63d',
    );
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|header|2"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|navigation|1"] = 'new-3202a330-fa71-44f2-be0a-265ed734b321';
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|navigation|2"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|footer|6"] = 'new-21663aca-ac35-4ab2-b5d9-6369ccb7e63d';

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-1235d134-3c15-4d11-86e4-a48f9c8737b3|position"] = 2;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-18cfc092-1d0f-42e4-bde8-8a6e314c9bd0|position"] = 2;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-3f5761b9-1db4-4dc9-87cb-13e33008a1fc|position"] = 0;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-5908f209-587b-4482-8a5f-b1b75cdef732"] = (object) array(
      'pid' => 'new-5908f209-587b-4482-8a5f-b1b75cdef732',
      'panel' => 'tertiary',
      'type' => 'all_opening_hours',
      'subtype' => 'all_opening_hours',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '5908f209-587b-4482-8a5f-b1b75cdef732',
    );
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-5e2a0d2d-7b27-498e-a368-d4e9a2888769|panel"] = 'secondary';
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-5e2a0d2d-7b27-498e-a368-d4e9a2888769|position"] = 0;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-6af18880-acd3-436c-a1e3-39581aa3b62a"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-6fbe82af-b670-4746-90bf-a44ac1007db4"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-74a49488-f11d-40b6-8211-52e84c8b296a|position"] = 1;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-ca2f62ff-8c78-44c0-9259-6cf568418012|panel"] = 'primary';
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-ca2f62ff-8c78-44c0-9259-6cf568418012|position"] = 3;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|panels|primary|0"] = 'new-3f5761b9-1db4-4dc9-87cb-13e33008a1fc';
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|panels|primary|1"] = 'new-74a49488-f11d-40b6-8211-52e84c8b296a';
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|panels|primary|2"] = 'new-18cfc092-1d0f-42e4-bde8-8a6e314c9bd0';
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|panels|primary|3"] = 'new-ca2f62ff-8c78-44c0-9259-6cf568418012';
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|panels|primary|4"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|panels|secondary|0"] = 'new-5e2a0d2d-7b27-498e-a368-d4e9a2888769';
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|panels|secondary|2"] = 'new-1235d134-3c15-4d11-86e4-a48f9c8737b3';
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|panels|secondary|3"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|panels|tertiary|1"] = 'new-5908f209-587b-4482-8a5f-b1b75cdef732';
  $overrides["page_manager_pages.ding_staff_library.default_handlers|page_ding_staff_library_panel_context|conf|display|content|new-6171a17a-4789-4aac-86de-eb9c76dee003"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.ding_staff_library.default_handlers|page_ding_staff_library_panel_context|conf|display|content|new-ea6b2837-b81a-4750-bb37-0fd27ab49e8e"] = (object) array(
      'pid' => 'new-ea6b2837-b81a-4750-bb37-0fd27ab49e8e',
      'panel' => 'main_content',
      'type' => 'views_panes',
      'subtype' => 'vejlebib_ding_staff-ding_staff_list_library',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 1,
        'override_title_text' => '%slug:title: Staff',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_id' => '',
        'css_class' => 'grid-medium',
      ),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => 'ea6b2837-b81a-4750-bb37-0fd27ab49e8e',
    );
  $overrides["page_manager_pages.ding_staff_library.default_handlers|page_ding_staff_library_panel_context|conf|display|panels|main_content|1"] = 'new-ea6b2837-b81a-4750-bb37-0fd27ab49e8e';
  $overrides["page_manager_pages.ding_staff_library.default_handlers|page_ding_staff_library_panel_context|conf|display|title_pane"] = 'new-ea6b2837-b81a-4750-bb37-0fd27ab49e8e';

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
  $overrides["views_view.ding_news.display|ding_news_groups_list|display_options|fields|field_ding_news_list_image|settings|image_style"] = 'vejlebib_list';
  $overrides["views_view.ding_news.display|ding_news_groups_list|display_options|fields|field_ding_news_list_image|settings|styles"]["DELETED"] = TRUE;
  $overrides["views_view.ding_news.display|ding_news_groups_list|display_options|fields|field_ding_news_list_image|type"]["DELETED"] = TRUE;

 return $overrides;
}
