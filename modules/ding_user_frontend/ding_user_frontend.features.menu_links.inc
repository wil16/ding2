<?php
/**
 * @file
 * ding_user_frontend.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ding_user_frontend_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_betal-gebyrer:menutoken/5984878e03fac
  $menu_links['user-menu_betal-gebyrer:menutoken/5984878e03fac'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/5984878e03fac',
    'router_path' => 'menutoken/%',
    'link_title' => 'Betal gebyrer',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]/status-debts',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/5984873087184',
      'identifier' => 'user-menu_betal-gebyrer:menutoken/5984878e03fac',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: user-menu_ln:menutoken/598487982fbcd
  $menu_links['user-menu_ln:menutoken/598487982fbcd'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/598487982fbcd',
    'router_path' => 'menutoken/%',
    'link_title' => 'Lån',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]/status-loans',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_ln:menutoken/598487982fbcd',
      'menu_token_link_uuid' => 'menutoken/5984874b1f093',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 11,
    'customized' => 1,
  );
  // Exported menu link: user-menu_mit-personlige-bibliotek:menutoken/59848778bffd8
  $menu_links['user-menu_mit-personlige-bibliotek:menutoken/59848778bffd8'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/59848778bffd8',
    'router_path' => 'menutoken/%',
    'link_title' => 'Mit personlige bibliotek',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]/view',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/59848720555e6',
      'identifier' => 'user-menu_mit-personlige-bibliotek:menutoken/59848778bffd8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: user-menu_rediger-min-profil:menutoken/59848782b3d69
  $menu_links['user-menu_rediger-min-profil:menutoken/59848782b3d69'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/59848782b3d69',
    'router_path' => 'menutoken/%',
    'link_title' => 'Rediger min profil',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]/edit',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_rediger-min-profil:menutoken/59848782b3d69',
      'menu_token_link_uuid' => 'menutoken/59848727a915f',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: user-menu_reserveringer-klar-til-afhentning:menutoken/59848768c82bc
  $menu_links['user-menu_reserveringer-klar-til-afhentning:menutoken/59848768c82bc'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/59848768c82bc',
    'router_path' => 'menutoken/%',
    'link_title' => 'Reserveringer klar til afhentning',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]/status-reservations-ready',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_reserveringer-klar-til-afhentning:menutoken/59848768c82bc',
      'menu_token_link_uuid' => 'menutoken/59848715043d5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_reserveringer:menutoken/598487a647ecd
  $menu_links['user-menu_reserveringer:menutoken/598487a647ecd'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/598487a647ecd',
    'router_path' => 'menutoken/%',
    'link_title' => 'Reserveringer',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]/status-reservations',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/5984875043b91',
      'identifier' => 'user-menu_reserveringer:menutoken/598487a647ecd',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Betal gebyrer');
  t('Log out');
  t('Lån');
  t('Mit personlige bibliotek');
  t('Rediger min profil');
  t('Reserveringer');
  t('Reserveringer klar til afhentning');
  t('User account');


  return $menu_links;
}
