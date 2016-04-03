<?php
/**
 * @file
 * features_baseline_setup.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function features_baseline_setup_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-footer.
  $menus['menu-menu-footer'] = array(
    'menu_name' => 'menu-menu-footer',
    'title' => 'Footer Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Menu');

  return $menus;
}
