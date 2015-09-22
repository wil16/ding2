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
