<?php
/**
 * @file
 * vejlebib_views_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function vejlebib_views_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'vejlebib Library (organic group)',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'ding-library-front',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_library' => 'ding_library',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'og_is_node_group',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '381711b4-4fab-4202-8833-40b5d4d9ce32';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6564cfc9-ba2e-4850-bf1a-8ec5cc225a42';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6564cfc9-ba2e-4850-bf1a-8ec5cc225a42';
    $display->content['new-6564cfc9-ba2e-4850-bf1a-8ec5cc225a42'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-6564cfc9-ba2e-4850-bf1a-8ec5cc225a42';
    $pane = new stdClass();
    $pane->pid = 'new-f5b0586b-e936-488d-a55c-947dfefcd009';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_library_title_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'cs_adaptive_image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'ding_large',
        'image_link' => '',
        'styles' => array(
          'breakpoint_1' => '768',
          'style_1' => 'ding_secondary_medium',
          'breakpoint_2' => '500',
          'style_2' => 'ding_secondary_small',
          'max_style' => 'ding_secondary_large',
          'fallback_style' => 'ding_secondary_large',
        ),
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-library-image',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f5b0586b-e936-488d-a55c-947dfefcd009';
    $display->content['new-f5b0586b-e936-488d-a55c-947dfefcd009'] = $pane;
    $display->panels['main_content'][0] = 'new-f5b0586b-e936-488d-a55c-947dfefcd009';
    $pane = new stdClass();
    $pane->pid = 'new-d750cb24-2623-42c8-af9c-1b6ff68dd04b';
    $pane->panel = 'main_content';
    $pane->type = 'address';
    $pane->subtype = 'address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-library-address',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd750cb24-2623-42c8-af9c-1b6ff68dd04b';
    $display->content['new-d750cb24-2623-42c8-af9c-1b6ff68dd04b'] = $pane;
    $display->panels['main_content'][1] = 'new-d750cb24-2623-42c8-af9c-1b6ff68dd04b';
    $pane = new stdClass();
    $pane->pid = 'new-6359c558-4441-472d-aa9a-01a60061911f';
    $pane->panel = 'main_content';
    $pane->type = 'contact';
    $pane->subtype = 'contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-library-contact',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '6359c558-4441-472d-aa9a-01a60061911f';
    $display->content['new-6359c558-4441-472d-aa9a-01a60061911f'] = $pane;
    $display->panels['main_content'][2] = 'new-6359c558-4441-472d-aa9a-01a60061911f';
    $pane = new stdClass();
    $pane->pid = 'new-26f08b87-616d-45db-97f9-6bf0ec2e0ca1';
    $pane->panel = 'main_content';
    $pane->type = 'week';
    $pane->subtype = 'week';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'hide_if_empty' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-library-opening-hours js-opening-hours-toggle-element',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '26f08b87-616d-45db-97f9-6bf0ec2e0ca1';
    $display->content['new-26f08b87-616d-45db-97f9-6bf0ec2e0ca1'] = $pane;
    $display->panels['main_content'][3] = 'new-26f08b87-616d-45db-97f9-6bf0ec2e0ca1';
    $pane = new stdClass();
    $pane->pid = 'new-ce52c1a0-de29-45b5-83ef-03a71a32ff5d';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'vejlebib_ding_news-ding_news_library_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => 'Library news',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-library-news',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ce52c1a0-de29-45b5-83ef-03a71a32ff5d';
    $display->content['new-ce52c1a0-de29-45b5-83ef-03a71a32ff5d'] = $pane;
    $display->panels['main_content'][4] = 'new-ce52c1a0-de29-45b5-83ef-03a71a32ff5d';
    $pane = new stdClass();
    $pane->pid = 'new-a03269f4-7286-4752-af8e-239f14bf6182';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'vejlebib_ding_event-vejlebib_ding_event_library_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Library events',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-library-events',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a03269f4-7286-4752-af8e-239f14bf6182';
    $display->content['new-a03269f4-7286-4752-af8e-239f14bf6182'] = $pane;
    $display->panels['main_content'][5] = 'new-a03269f4-7286-4752-af8e-239f14bf6182';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Page (inspiration)',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Multiple terms from node',
        'keyword' => 'terms',
        'name' => 'terms_from_node',
        'context' => 'argument_entity_id:node_1',
        'vid' => array(
          3 => '3',
          4 => '4',
          1 => '1',
          2 => '2',
        ),
        'concatenator' => ',',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'inspiration',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e4576eaa-237b-4dbb-917b-aba5bff3d8a3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-059731b5-2ba2-4801-a0a0-f70365309999';
    $pane->panel = 'main_content';
    $pane->type = 'carousel';
    $pane->subtype = 'carousel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '059731b5-2ba2-4801-a0a0-f70365309999';
    $display->content['new-059731b5-2ba2-4801-a0a0-f70365309999'] = $pane;
    $display->panels['main_content'][0] = 'new-059731b5-2ba2-4801-a0a0-f70365309999';
    $pane = new stdClass();
    $pane->pid = 'new-33f78b6a-3147-455f-b437-70261fe3426c';
    $pane->panel = 'main_content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '33f78b6a-3147-455f-b437-70261fe3426c';
    $display->content['new-33f78b6a-3147-455f-b437-70261fe3426c'] = $pane;
    $display->panels['main_content'][1] = 'new-33f78b6a-3147-455f-b437-70261fe3426c';
    $pane = new stdClass();
    $pane->pid = 'new-0c1b010b-aad2-4a5e-badd-f2fe5334a80c';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '0c1b010b-aad2-4a5e-badd-f2fe5334a80c';
    $display->content['new-0c1b010b-aad2-4a5e-badd-f2fe5334a80c'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-0c1b010b-aad2-4a5e-badd-f2fe5334a80c';
    $pane = new stdClass();
    $pane->pid = 'new-0d732c8e-6a2e-4993-ba6f-7cb2025bada6';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '0d732c8e-6a2e-4993-ba6f-7cb2025bada6';
    $display->content['new-0d732c8e-6a2e-4993-ba6f-7cb2025bada6'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-0d732c8e-6a2e-4993-ba6f-7cb2025bada6';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-33f78b6a-3147-455f-b437-70261fe3426c';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_ting_search_panel_context_2';
  $handler->task = 'search';
  $handler->subtask = 'ting_search';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'vejlebib ting search',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Search
Well
%keywords:html_safe',
    'panels_breadcrumbs_paths' => 'search
search/ting
<none>
',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '89ccc912-f8e7-48ee-a3ba-0845a9d74828';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ede39887-592c-42da-aca6-c8320673c895';
    $pane->panel = 'left_sidebar';
    $pane->type = 'ting_visual_relation_search';
    $pane->subtype = 'ting_visual_relation_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_string_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ede39887-592c-42da-aca6-c8320673c895';
    $display->content['new-ede39887-592c-42da-aca6-c8320673c895'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-ede39887-592c-42da-aca6-c8320673c895';
    $pane = new stdClass();
    $pane->pid = 'new-0a2909d5-66fc-4ed9-b2d4-9f5b156613fb';
    $pane->panel = 'left_sidebar';
    $pane->type = 'search_backends';
    $pane->subtype = 'search_backends';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0a2909d5-66fc-4ed9-b2d4-9f5b156613fb';
    $display->content['new-0a2909d5-66fc-4ed9-b2d4-9f5b156613fb'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-0a2909d5-66fc-4ed9-b2d4-9f5b156613fb';
    $pane = new stdClass();
    $pane->pid = 'new-4ec62a31-68e9-4b3a-a7b5-3d82786f1cd3';
    $pane->panel = 'left_sidebar';
    $pane->type = 'ding_facetbrowser';
    $pane->subtype = 'ding_facetbrowser';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filtrér din søgning',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '4ec62a31-68e9-4b3a-a7b5-3d82786f1cd3';
    $display->content['new-4ec62a31-68e9-4b3a-a7b5-3d82786f1cd3'] = $pane;
    $display->panels['left_sidebar'][2] = 'new-4ec62a31-68e9-4b3a-a7b5-3d82786f1cd3';
    $pane = new stdClass();
    $pane->pid = 'new-73c3c16a-ce23-4c35-a889-106002ab21f9';
    $pane->panel = 'main_content';
    $pane->type = 'search_backends';
    $pane->subtype = 'search_backends';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'js-mobile-facets',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '73c3c16a-ce23-4c35-a889-106002ab21f9';
    $display->content['new-73c3c16a-ce23-4c35-a889-106002ab21f9'] = $pane;
    $display->panels['main_content'][0] = 'new-73c3c16a-ce23-4c35-a889-106002ab21f9';
    $pane = new stdClass();
    $pane->pid = 'new-b961b73a-c7cb-452d-a8c9-3e23ca922bdc';
    $pane->panel = 'main_content';
    $pane->type = 'ding_facetbrowser';
    $pane->subtype = 'ding_facetbrowser';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filtrér din søgning',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'js-mobile-facets',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b961b73a-c7cb-452d-a8c9-3e23ca922bdc';
    $display->content['new-b961b73a-c7cb-452d-a8c9-3e23ca922bdc'] = $pane;
    $display->panels['main_content'][1] = 'new-b961b73a-c7cb-452d-a8c9-3e23ca922bdc';
    $pane = new stdClass();
    $pane->pid = 'new-5921cdc8-8a7b-41a4-b80a-12788ea086d4';
    $pane->panel = 'main_content';
    $pane->type = 'search_result_count';
    $pane->subtype = 'search_result_count';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_string_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5921cdc8-8a7b-41a4-b80a-12788ea086d4';
    $display->content['new-5921cdc8-8a7b-41a4-b80a-12788ea086d4'] = $pane;
    $display->panels['main_content'][2] = 'new-5921cdc8-8a7b-41a4-b80a-12788ea086d4';
    $pane = new stdClass();
    $pane->pid = 'new-81752b13-4f09-4c1c-876c-3a081824c5f9';
    $pane->panel = 'main_content';
    $pane->type = 'ting_visual_relation_search';
    $pane->subtype = 'ting_visual_relation_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_string_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '81752b13-4f09-4c1c-876c-3a081824c5f9';
    $display->content['new-81752b13-4f09-4c1c-876c-3a081824c5f9'] = $pane;
    $display->panels['main_content'][3] = 'new-81752b13-4f09-4c1c-876c-3a081824c5f9';
    $pane = new stdClass();
    $pane->pid = 'new-d688e3d0-3077-4b71-aa91-50acb5691bc0';
    $pane->panel = 'main_content';
    $pane->type = 'search_per_page';
    $pane->subtype = 'search_per_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'select_type' => 'dropdown',
      'context' => 'argument_string_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd688e3d0-3077-4b71-aa91-50acb5691bc0';
    $display->content['new-d688e3d0-3077-4b71-aa91-50acb5691bc0'] = $pane;
    $display->panels['main_content'][4] = 'new-d688e3d0-3077-4b71-aa91-50acb5691bc0';
    $pane = new stdClass();
    $pane->pid = 'new-98198208-bd42-42a5-bf0b-f31bb8a55986';
    $pane->panel = 'main_content';
    $pane->type = 'block';
    $pane->subtype = 'ting_search-sort_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '98198208-bd42-42a5-bf0b-f31bb8a55986';
    $display->content['new-98198208-bd42-42a5-bf0b-f31bb8a55986'] = $pane;
    $display->panels['main_content'][5] = 'new-98198208-bd42-42a5-bf0b-f31bb8a55986';
    $pane = new stdClass();
    $pane->pid = 'new-8142e8e8-1832-403d-a23e-1f5493f0294e';
    $pane->panel = 'main_content';
    $pane->type = 'zerohit_form';
    $pane->subtype = 'zerohit_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'ting_search',
      'webform_id' => '4',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '8142e8e8-1832-403d-a23e-1f5493f0294e';
    $display->content['new-8142e8e8-1832-403d-a23e-1f5493f0294e'] = $pane;
    $display->panels['main_content'][6] = 'new-8142e8e8-1832-403d-a23e-1f5493f0294e';
    $pane = new stdClass();
    $pane->pid = 'new-6a5a8bbb-bdb7-4ef8-a973-c3d31b2f0b19';
    $pane->panel = 'main_content';
    $pane->type = 'search_result';
    $pane->subtype = 'search_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'ting_search',
      'log' => 0,
      'override_empty' => 0,
      'empty_title' => '',
      'empty' => '',
      'empty_format' => 'plain_text',
      'override_no_key' => 0,
      'no_key_title' => '',
      'no_key' => '',
      'no_key_format' => 'plain_text',
      'context' => 'argument_string_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = '';
    $pane->uuid = '6a5a8bbb-bdb7-4ef8-a973-c3d31b2f0b19';
    $display->content['new-6a5a8bbb-bdb7-4ef8-a973-c3d31b2f0b19'] = $pane;
    $display->panels['main_content'][7] = 'new-6a5a8bbb-bdb7-4ef8-a973-c3d31b2f0b19';
    $pane = new stdClass();
    $pane->pid = 'new-e0219139-a8cc-4c1d-b272-e3212118c0ff';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'argument_string_1',
        3 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'e0219139-a8cc-4c1d-b272-e3212118c0ff';
    $display->content['new-e0219139-a8cc-4c1d-b272-e3212118c0ff'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-e0219139-a8cc-4c1d-b272-e3212118c0ff';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['search_ting_search_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_2';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'vejlebib Ding site template',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'ding2_site_template';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'branding_top' => NULL,
      'header' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'branding_bottom' => NULL,
      'branding' => NULL,
      'bottom' => NULL,
      'navigation' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '30683416-144c-46e7-864b-228157ef8f77';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9d7f712d-291d-405b-8a3a-82b43e00ace8';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9d7f712d-291d-405b-8a3a-82b43e00ace8';
    $display->content['new-9d7f712d-291d-405b-8a3a-82b43e00ace8'] = $pane;
    $display->panels['bottom'][0] = 'new-9d7f712d-291d-405b-8a3a-82b43e00ace8';
    $pane = new stdClass();
    $pane->pid = 'new-8b0787a5-cd40-447a-954c-a4a7371114c1';
    $pane->panel = 'branding';
    $pane->type = 'pane_header';
    $pane->subtype = 'pane_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8b0787a5-cd40-447a-954c-a4a7371114c1';
    $display->content['new-8b0787a5-cd40-447a-954c-a4a7371114c1'] = $pane;
    $display->panels['branding'][0] = 'new-8b0787a5-cd40-447a-954c-a4a7371114c1';
    $pane = new stdClass();
    $pane->pid = 'new-78543bfa-f8fd-476a-b338-4579e1505f5f';
    $pane->panel = 'branding';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-tabs-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '78543bfa-f8fd-476a-b338-4579e1505f5f';
    $display->content['new-78543bfa-f8fd-476a-b338-4579e1505f5f'] = $pane;
    $display->panels['branding'][1] = 'new-78543bfa-f8fd-476a-b338-4579e1505f5f';
    $pane = new stdClass();
    $pane->pid = 'new-caa76464-1039-48ee-89da-5f26bee03d48';
    $pane->panel = 'content';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'system-messages',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'caa76464-1039-48ee-89da-5f26bee03d48';
    $display->content['new-caa76464-1039-48ee-89da-5f26bee03d48'] = $pane;
    $display->panels['content'][0] = 'new-caa76464-1039-48ee-89da-5f26bee03d48';
    $pane = new stdClass();
    $pane->pid = 'new-2ccabffa-3c3f-4545-a876-fd7457f806bf';
    $pane->panel = 'content';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        1 => array(
          'name' => 'external_user',
          'settings' => NULL,
          'context' => array(
            0 => 'logged-in-user',
          ),
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'user/*',
          ),
          'context' => 'empty',
          'not' => TRUE,
        ),
      ),
      'logic' => 'or',
    );
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2ccabffa-3c3f-4545-a876-fd7457f806bf';
    $display->content['new-2ccabffa-3c3f-4545-a876-fd7457f806bf'] = $pane;
    $display->panels['content'][1] = 'new-2ccabffa-3c3f-4545-a876-fd7457f806bf';
    $pane = new stdClass();
    $pane->pid = 'new-20e3661f-0f04-4785-bcb5-2abbdd4ec5f1';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '20e3661f-0f04-4785-bcb5-2abbdd4ec5f1';
    $display->content['new-20e3661f-0f04-4785-bcb5-2abbdd4ec5f1'] = $pane;
    $display->panels['content'][2] = 'new-20e3661f-0f04-4785-bcb5-2abbdd4ec5f1';
    $pane = new stdClass();
    $pane->pid = 'new-082d7d37-0797-4c2b-9129-60cbccd32127';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'attachment-first',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '082d7d37-0797-4c2b-9129-60cbccd32127';
    $display->content['new-082d7d37-0797-4c2b-9129-60cbccd32127'] = $pane;
    $display->panels['footer'][0] = 'new-082d7d37-0797-4c2b-9129-60cbccd32127';
    $pane = new stdClass();
    $pane->pid = 'new-1fecac69-5d49-48bc-ba0d-0596f9d78869';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'attachment-second',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '1fecac69-5d49-48bc-ba0d-0596f9d78869';
    $display->content['new-1fecac69-5d49-48bc-ba0d-0596f9d78869'] = $pane;
    $display->panels['footer'][1] = 'new-1fecac69-5d49-48bc-ba0d-0596f9d78869';
    $pane = new stdClass();
    $pane->pid = 'new-706c8b0e-fceb-4dd2-ba52-4277b6558d54';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'attachment-third',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '706c8b0e-fceb-4dd2-ba52-4277b6558d54';
    $display->content['new-706c8b0e-fceb-4dd2-ba52-4277b6558d54'] = $pane;
    $display->panels['footer'][2] = 'new-706c8b0e-fceb-4dd2-ba52-4277b6558d54';
    $pane = new stdClass();
    $pane->pid = 'new-ee13ffff-2392-41fa-8dcb-82ceb5166fb1';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'attachment-fourth',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = 'ee13ffff-2392-41fa-8dcb-82ceb5166fb1';
    $display->content['new-ee13ffff-2392-41fa-8dcb-82ceb5166fb1'] = $pane;
    $display->panels['footer'][3] = 'new-ee13ffff-2392-41fa-8dcb-82ceb5166fb1';
    $pane = new stdClass();
    $pane->pid = 'new-91e0d028-e796-44d1-82de-ac12aa58229e';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '91e0d028-e796-44d1-82de-ac12aa58229e';
    $display->content['new-91e0d028-e796-44d1-82de-ac12aa58229e'] = $pane;
    $display->panels['header'][0] = 'new-91e0d028-e796-44d1-82de-ac12aa58229e';
    $pane = new stdClass();
    $pane->pid = 'new-b0226dfc-9943-4a57-99f7-44ef441a3709';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b0226dfc-9943-4a57-99f7-44ef441a3709';
    $display->content['new-b0226dfc-9943-4a57-99f7-44ef441a3709'] = $pane;
    $display->panels['header'][1] = 'new-b0226dfc-9943-4a57-99f7-44ef441a3709';
    $pane = new stdClass();
    $pane->pid = 'new-b9e9fa2d-16fb-4a38-bf1e-4ee301e9bb7f';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'ding_opening_hours-oho-lib-today';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b9e9fa2d-16fb-4a38-bf1e-4ee301e9bb7f';
    $display->content['new-b9e9fa2d-16fb-4a38-bf1e-4ee301e9bb7f'] = $pane;
    $display->panels['header'][2] = 'new-b9e9fa2d-16fb-4a38-bf1e-4ee301e9bb7f';
    $pane = new stdClass();
    $pane->pid = 'new-07f87c6a-4ec6-4101-b238-db22b09803d7';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'vejlebib_views_panels-vejlebib-ding-userinfo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '07f87c6a-4ec6-4101-b238-db22b09803d7';
    $display->content['new-07f87c6a-4ec6-4101-b238-db22b09803d7'] = $pane;
    $display->panels['header'][3] = 'new-07f87c6a-4ec6-4101-b238-db22b09803d7';
    $pane = new stdClass();
    $pane->pid = 'new-adb013cb-19a9-45fe-bc2d-699dccd3e846';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-information_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'adb013cb-19a9-45fe-bc2d-699dccd3e846';
    $display->content['new-adb013cb-19a9-45fe-bc2d-699dccd3e846'] = $pane;
    $display->panels['header'][4] = 'new-adb013cb-19a9-45fe-bc2d-699dccd3e846';
    $pane = new stdClass();
    $pane->pid = 'new-d981e7f7-c2ce-4142-adbc-29dc52526d5d';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd981e7f7-c2ce-4142-adbc-29dc52526d5d';
    $display->content['new-d981e7f7-c2ce-4142-adbc-29dc52526d5d'] = $pane;
    $display->panels['navigation'][0] = 'new-d981e7f7-c2ce-4142-adbc-29dc52526d5d';
    $pane = new stdClass();
    $pane->pid = 'new-5bd4b439-65ea-40a6-a1bf-81a053443de5';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'vejlebib_views_panels-vejlebib-nav-helpers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5bd4b439-65ea-40a6-a1bf-81a053443de5';
    $display->content['new-5bd4b439-65ea-40a6-a1bf-81a053443de5'] = $pane;
    $display->panels['navigation'][1] = 'new-5bd4b439-65ea-40a6-a1bf-81a053443de5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_2'] = $handler;
  
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ding_frontpage_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ding_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'vejlebib Ding frontpage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'ding_layout_1';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'top_secondary' => NULL,
      'main_content' => NULL,
      'main_left_right' => NULL,
      'main_right_right' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
      'primary' => NULL,
      'secondary' => NULL,
      'tertiary' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1f8bc47f-297b-4c70-bcd0-e3e54c5c4830';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e29b1489-dbcf-4630-a272-2176eaeb122d';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_groups-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-e29b1489-dbcf-4630-a272-2176eaeb122d'] = $pane;
    $display->panels['attachment_1_1'][0] = 'new-e29b1489-dbcf-4630-a272-2176eaeb122d';
    $pane = new stdClass();
    $pane->pid = 'new-2334f4b0-b7a7-4e98-919c-550c31e1a822';
    $pane->panel = 'primary';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_tabroll-ding_frontpage_tabroll';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2334f4b0-b7a7-4e98-919c-550c31e1a822'] = $pane;
    $display->panels['primary'][0] = 'new-2334f4b0-b7a7-4e98-919c-550c31e1a822';
    $pane = new stdClass();
    $pane->pid = 'new-0db9e683-fa70-40f9-85ce-5d6e61068c91';
    $pane->panel = 'secondary';
    $pane->type = 'views_panes';
    $pane->subtype = 'vejlebib_ding_news-ding_news_frontpage_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-0db9e683-fa70-40f9-85ce-5d6e61068c91'] = $pane;
    $display->panels['secondary'][0] = 'new-0db9e683-fa70-40f9-85ce-5d6e61068c91';
    $pane = new stdClass();
    $pane->pid = 'new-7178eb4b-1e96-4419-b2cb-f4e5858b560b';
    $pane->panel = 'tertiary';
    $pane->type = 'views_panes';
    $pane->subtype = 'vejlebib_ding_event-vejlebib_ding_event_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',  
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-7178eb4b-1e96-4419-b2cb-f4e5858b560b'] = $pane;
    $display->panels['tertiary'][0] = 'new-7178eb4b-1e96-4419-b2cb-f4e5858b560b';
    $pane = new stdClass();
    $pane->pid = 'new-6a883842-25f5-4b2e-abcd-1c17b3f526ca'; 
    $pane->panel = 'tertiary';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 5,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'empty',
        3 => 'empty',
      ),
      'override_title' => 1,
      'override_title_text' => 'Campaigns',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-6a883842-25f5-4b2e-abcd-1c17b3f526ca'] = $pane;
    $display->panels['tertiary'][1] = 'new-6a883842-25f5-4b2e-abcd-1c17b3f526ca';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_ding_frontpage_panel_context_2'] = $handler;  

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function vejlebib_views_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ding_staff';
  $page->task = 'page';
  $page->admin_title = 'Ding staff';
  $page->admin_description = '';
  $page->path = 'personale';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ding_staff_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ding_staff';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'vejlebib Ding staff',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '25beaf29-8d33-4927-8c54-54ec74cf131f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e7c2a25a-b990-48bd-907e-6f16a3efdf22';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'vejlebib_ding_staff-ding_staff_list_all';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e7c2a25a-b990-48bd-907e-6f16a3efdf22';
    $display->content['new-e7c2a25a-b990-48bd-907e-6f16a3efdf22'] = $pane;
    $display->panels['main_content'][0] = 'new-e7c2a25a-b990-48bd-907e-6f16a3efdf22';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ding_staff_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ding_staff';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Ding staff',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9113a0a1-50c9-4dca-be73-ed77a5165924';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f93e59da-0a67-46a9-a74d-e333b3f8e7e7';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_staff-ding_staff_list_all';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f93e59da-0a67-46a9-a74d-e333b3f8e7e7';
    $display->content['new-f93e59da-0a67-46a9-a74d-e333b3f8e7e7'] = $pane;
    $display->panels['main_content'][0] = 'new-f93e59da-0a67-46a9-a74d-e333b3f8e7e7';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ding_staff'] = $page;

  return $pages;

}
