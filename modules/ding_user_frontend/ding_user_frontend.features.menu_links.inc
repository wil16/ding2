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

  // Exported menu link: user-menu_brugerprofil:menutoken/5983827dad7bd
  $menu_links['user-menu_brugerprofil:menutoken/5983827dad7bd'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/5983827dad7bd',
    'router_path' => 'menutoken/%',
    'link_title' => 'Brugerprofil',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]/edit',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_brugerprofil:menutoken/5983827dad7bd',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_ln:menutoken/5983845739c56
  $menu_links['user-menu_ln:menutoken/5983845739c56'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/5983845739c56',
    'router_path' => 'menutoken/%',
    'link_title' => 'Lån',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]/status-loans',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_ln:menutoken/5983845739c56',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
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
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: user-menu_mellemvrende:menutoken/5983850bccdb4
  $menu_links['user-menu_mellemvrende:menutoken/5983850bccdb4'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/5983850bccdb4',
    'router_path' => 'menutoken/%',
    'link_title' => 'Mellemværende',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]/status-debts',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/598385088052e',
      'identifier' => 'user-menu_mellemvrende:menutoken/5983850bccdb4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: user-menu_notifikationer:menutoken/5983853656198
  $menu_links['user-menu_notifikationer:menutoken/5983853656198'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/5983853656198',
    'router_path' => 'menutoken/%',
    'link_title' => 'Mit personlige bibliotek',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]/view',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/598385311e749',
      'identifier' => 'user-menu_notifikationer:menutoken/5983853656198',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_reserveringer-klar-til-afhentning:menutoken/598384aaad47b
  $menu_links['user-menu_reserveringer-klar-til-afhentning:menutoken/598384aaad47b'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/598384aaad47b',
    'router_path' => 'menutoken/%',
    'link_title' => 'Reserveringer klar til afhentning',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]/status-reservations-ready',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_reserveringer-klar-til-afhentning:menutoken/598384aaad47b',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: user-menu_reserveringer:menutoken/598384df84087
  $menu_links['user-menu_reserveringer:menutoken/598384df84087'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/598384df84087',
    'router_path' => 'menutoken/%',
    'link_title' => 'Reserveringer',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]/status-reservations',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/598384d708a24',
      'identifier' => 'user-menu_reserveringer:menutoken/598384df84087',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
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
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Brugerprofil');
  t('Log out');
  t('Lån');
  t('Mellemværende');
  t('Mit personlige bibliotek');
  t('Reserveringer');
  t('Reserveringer klar til afhentning');
  t('User account');


  return $menu_links;
}
