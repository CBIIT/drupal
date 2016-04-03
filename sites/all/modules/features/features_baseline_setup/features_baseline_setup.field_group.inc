<?php
/**
 * @file
 * features_baseline_setup.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_baseline_setup_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_login_credentials|user|user|form';
  $field_group->group_name = 'group_user_login_credentials';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Login Credentials',
    'weight' => '1',
    'children' => array(
      0 => 'account',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-login-credentials field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_user_login_credentials|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_profile|user|user|form';
  $field_group->group_name = 'group_user_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User Profile',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_first_name',
      1 => 'field_user_last_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-profile field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_user_profile|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Login Credentials');
  t('User Profile');

  return $field_groups;
}
