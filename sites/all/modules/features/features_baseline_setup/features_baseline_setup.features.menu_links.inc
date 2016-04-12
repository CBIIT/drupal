<?php
/**
 * @file
 * features_baseline_setup.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function features_baseline_setup_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-footer_accessibility:http://www.cancer.gov/policies/accessibility.
  $menu_links['menu-menu-footer_accessibility:http://www.cancer.gov/policies/accessibility'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'http://www.cancer.gov/policies/accessibility',
    'router_path' => '',
    'link_title' => 'Accessibility',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-footer_accessibility:http://www.cancer.gov/policies/accessibility',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-footer_disclaimer:http://www.cancer.gov/policies/disclaimer.
  $menu_links['menu-menu-footer_disclaimer:http://www.cancer.gov/policies/disclaimer'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'http://www.cancer.gov/policies/disclaimer',
    'router_path' => '',
    'link_title' => 'Disclaimer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-footer_disclaimer:http://www.cancer.gov/policies/disclaimer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-footer_foia:http://www.cancer.gov/policies/foia.
  $menu_links['menu-menu-footer_foia:http://www.cancer.gov/policies/foia'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'http://www.cancer.gov/policies/foia',
    'router_path' => '',
    'link_title' => 'FOIA',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-footer_foia:http://www.cancer.gov/policies/foia',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accessibility');
  t('Disclaimer');
  t('FOIA');

  return $menu_links;
}
