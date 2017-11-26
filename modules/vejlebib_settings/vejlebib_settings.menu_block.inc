<?php
/**
 * @file
 * vejlebib_settings.menu_block.inc
 */

/**
 * Implements hook_menu_block_defaults().
 */
function vejlebib_settings_menu_block_defaults() {
  $export = array();

  $menu_block = new stdClass();
  $menu_block->disabled = FALSE; /* Edit this to true to make a default menu_block disabled initially */
  $menu_block->api_version = 1;
  $menu_block->name = 'menu_block_secondary';
  $menu_block->label = 'Menu block secondary';
  $menu_block->description = 'A general menu block that shows the secondary level of the menu the current page belongs to. This block works for any menu.';
  $menu_block->depth = 3;
  $menu_block->expanded = 0;
  $menu_block->follow = '0';
  $menu_block->level = 2;
  $menu_block->parent = '_active:0';
  $menu_block->sort = 0;
  $menu_block->title_link = 0;
  $export['menu_block_secondary'] = $menu_block;

  return $export;
}
