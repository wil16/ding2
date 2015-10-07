<?php
/**
 * @file
 * vejlebib_features_overrides.features.inc
 */

/**
 * Implements hook_field_group_info_alter().
 */
function vejlebib_features_overrides_field_group_info_alter(&$data) {
  if (isset($data['group_holdings_available|ting_object|ting_object|default'])) {
    $data['group_holdings_available|ting_object|ting_object|default']->data['format_settings']['formatter'] = 'collapsible'; /* WAS: 'collapsed' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function vejlebib_features_overrides_field_default_field_instances_alter(&$data) {
  if (isset($data['node-ding_news-field_ding_news_list_image'])) {
    $data['node-ding_news-field_ding_news_list_image']['required'] = 1; /* WAS: 0 */
  }
  if (isset($data['node-ding_news-field_ding_news_title_image'])) {
    $data['node-ding_news-field_ding_news_title_image']['required'] = 1; /* WAS: 0 */
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function vejlebib_features_overrides_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_view_panel_context_5'])) {
    $data['node_view_panel_context_5']->conf['display']->content['new-162f6ba7-45ad-44f3-8ef6-5302990b1842'] = (object) array(
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
        ); /* WAS: '' */
    $data['node_view_panel_context_5']->conf['display']->panels['main_content'][2] = 'new-162f6ba7-45ad-44f3-8ef6-5302990b1842'; /* WAS: 'new-3bc42ce7-ca5f-4e5c-9176-2bcbaecc961a' */
    unset($data['node_view_panel_context_5']->conf['display']->content['new-3bc42ce7-ca5f-4e5c-9176-2bcbaecc961a']);
  }
  if (isset($data['search_ting_search_panel_context'])) {
    $data['search_ting_search_panel_context']->conf['display']->content['new-be085b97-4329-4521-8dba-fe6a07fe59b0'] = (object) array(
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
        ); /* WAS: '' */
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
          'position' => 7,
          'locks' => array(),
          'uuid' => 'e2418d10-4e53-4050-b1dd-fa8275589cc9',
        ); /* WAS: '' */
    $data['search_ting_search_panel_context']->conf['display']->panels['main_content'][6] = 'new-be085b97-4329-4521-8dba-fe6a07fe59b0'; /* WAS: '' */
    $data['search_ting_search_panel_context']->conf['display']->panels['main_content'][7] = 'new-e2418d10-4e53-4050-b1dd-fa8275589cc9'; /* WAS: '' */
  }
  if (isset($data['site_template_panel_context'])) {
    $data['site_template_panel_context']->conf['display']->content['new-ee547b2e-6dfb-4d6c-a0c9-1851b3dfd0fc'] = (object) array(
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
        ); /* WAS: '' */
    $data['site_template_panel_context']->conf['display']->content['new-b45d93a7-545d-43bb-bfcd-ff1726a0dcfb'] = (object) array(
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
        ); /* WAS: '' */
    $data['site_template_panel_context']->conf['display']->content['new-a26c9eef-5076-4e88-8327-3ca9a3acd38f'] = (object) array(
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
        ); /* WAS: '' */
    $data['site_template_panel_context']->conf['display']->content['new-803a4c6a-e633-4507-88b1-0f061d84a298'] = (object) array(
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
        ); /* WAS: '' */
    $data['site_template_panel_context']->conf['display']->content['new-f87605e1-1c3f-4108-9e89-7f5ac1810ff4'] = (object) array(
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
        ); /* WAS: '' */
    $data['site_template_panel_context']->conf['display']->panels['header'][2] = 'new-ee547b2e-6dfb-4d6c-a0c9-1851b3dfd0fc'; /* WAS: 'new-d9c1432b-77cc-432c-987a-eb64569a0b88' */
    $data['site_template_panel_context']->conf['display']->panels['header'][3] = 'new-b45d93a7-545d-43bb-bfcd-ff1726a0dcfb'; /* WAS: 'new-37d18c98-64ec-448f-ac62-ad0cc199fe06' */
    $data['site_template_panel_context']->conf['display']->panels['header'][4] = 'new-a26c9eef-5076-4e88-8327-3ca9a3acd38f'; /* WAS: '' */
    $data['site_template_panel_context']->conf['display']->panels['header'][5] = 'new-803a4c6a-e633-4507-88b1-0f061d84a298'; /* WAS: '' */
    $data['site_template_panel_context']->conf['display']->panels['header'][6] = 'new-f87605e1-1c3f-4108-9e89-7f5ac1810ff4'; /* WAS: '' */
    unset($data['site_template_panel_context']->conf['display']->content['new-37d18c98-64ec-448f-ac62-ad0cc199fe06']);
    unset($data['site_template_panel_context']->conf['display']->content['new-d9c1432b-77cc-432c-987a-eb64569a0b88']);
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function vejlebib_features_overrides_default_page_manager_pages_alter(&$data) {
  if (isset($data['ding_frontpage'])) {
    $data['ding_frontpage']->default_handlers['page_ding_frontpage_panel_context']->conf['display']->content['new-803af3cd-d614-46cf-98ba-6b21fb5ad7ac'] = (object) array(
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
        ); /* WAS: '' */
    $data['ding_frontpage']->default_handlers['page_ding_frontpage_panel_context']->conf['display']->panels['tertiary'][0] = 'new-803af3cd-d614-46cf-98ba-6b21fb5ad7ac'; /* WAS: 'new-1235d134-3c15-4d11-86e4-a48f9c8737b3' */
    unset($data['ding_frontpage']->default_handlers['page_ding_frontpage_panel_context']->conf['display']->content['new-1235d134-3c15-4d11-86e4-a48f9c8737b3']);
    unset($data['ding_frontpage']->default_handlers['page_ding_frontpage_panel_context']->conf['display']->content['new-b14f0ccc-f81c-4267-b843-2fd333f260f8']);
    unset($data['ding_frontpage']->default_handlers['page_ding_frontpage_panel_context']->conf['display']->panels['tertiary'][1]);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function vejlebib_features_overrides_strongarm_alter(&$data) {
  if (isset($data['ding_varnish_content_types'])) {
    $data['ding_varnish_content_types']->value['ding_eresource'] = 0; /* WAS: '' */
    $data['ding_varnish_content_types']->value['ding_event'] = 0; /* WAS: 'ding_event' */
    $data['ding_varnish_content_types']->value['ding_group'] = 0; /* WAS: 'ding_group' */
    $data['ding_varnish_content_types']->value['ding_inspiration_list'] = 0; /* WAS: '' */
    $data['ding_varnish_content_types']->value['ding_library'] = 0; /* WAS: 'ding_library' */
    $data['ding_varnish_content_types']->value['ding_news'] = 0; /* WAS: 'ding_news' */
    $data['ding_varnish_content_types']->value['ding_page'] = 0; /* WAS: 'ding_page' */
    $data['ding_varnish_content_types']->value['genre_page'] = 0; /* WAS: '' */
    $data['ding_varnish_content_types']->value['new_materials'] = 0; /* WAS: 'new_materials' */
    $data['ding_varnish_content_types']->value['webform'] = 0; /* WAS: '' */
  }
  if (isset($data['ding_varnish_paths'])) {
    $data['ding_varnish_paths']->value = ''; /* WAS: '<front>
    arrangementer\/*
    biblioteker\/*
    nyematerialer\/*
    nyheder\/*
    search\/*
    temaer\/*' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function vejlebib_features_overrides_views_default_views_alter(&$data) {
  if (isset($data['ding_news'])) {
    $data['ding_news']->display['ding_news_frontpage_list']->display_options['fields']['field_ding_news_list_image']['settings']['image_style'] = 'vejlebib_list'; /* WAS: '' */
    unset($data['ding_news']->display['ding_news_frontpage_list']->display_options['fields']['field_ding_news_list_image']['settings']['styles']);
    unset($data['ding_news']->display['ding_news_frontpage_list']->display_options['fields']['field_ding_news_list_image']['type']);
  }
}
