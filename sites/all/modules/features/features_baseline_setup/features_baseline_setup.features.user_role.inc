<?php
/**
 * @file
 * features_baseline_setup.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function features_baseline_setup_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 4,
  );

  // Exported role: Manager.
  $roles['Manager'] = array(
    'name' => 'Manager',
    'weight' => 2,
  );

  return $roles;
}
