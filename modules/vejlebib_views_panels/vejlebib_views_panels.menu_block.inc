<?php
/**
 * @file
 * vejlebib_views_panels.menu_block.inc
 */

/**
 * Implements hook_menu_block_defaults().
 */
function vejlebib_views_panels_menu_block_defaults() {
  $export = array();

  $menu_block = new stdClass();
  $menu_block->disabled = FALSE; /* Edit this to true to make a default menu_block disabled initially */
  $menu_block->api_version = 1;
  $menu_block->name = 'information_menu_block';
  $menu_block->label = 'Information menu block';
  $menu_block->description = 'Menu block holding our information menu.';
  $menu_block->depth = 1;
  $menu_block->expanded = 0;
  $menu_block->follow = '0';
  $menu_block->level = 1;
  $menu_block->parent = 'menu-information-menu:0';
  $menu_block->sort = 0;
  $menu_block->title_link = 0;
  $export['information_menu_block'] = $menu_block;

  return $export;
}
