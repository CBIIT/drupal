<?php
/**
 * @file
 * features_baseline_setup.backup_migrate_exportables.inc
 */

/**
 * Implements hook_exportables_backup_migrate_profiles().
 */
function features_baseline_setup_exportables_backup_migrate_profiles() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = '2952';
  $item->name = 'Backup without authentication tables';
  $item->filename = '[site:name]';
  $item->append_timestamp = TRUE;
  $item->timestamp_format = 'Y-m-d\\TH-i-s';
  $item->filters = array(
    'compression' => 'gzip',
    'notify_success_enable' => 0,
    'notify_success_email' => 'test@example.com',
    'notify_failure_enable' => 0,
    'notify_failure_email' => 'test@example.com',
    'utils_site_offline' => 0,
    'utils_site_offline_message' => 'National Cancer Institute is currently under maintenance. We should be back shortly. Thank you for your patience.',
    'utils_description' => '',
    'use_cli' => 0,
    'ignore_errors' => 0,
    'sources' => array(
      'db' => array(
        'exclude_tables' => array(
          'authmap' => 'authmap',
          'role' => 'role',
          'role_permission' => 'role_permission',
          'users' => 'users',
          'users_roles' => 'users_roles',
        ),
        'nodata_tables' => array(
          'cache' => 'cache',
          'cache_block' => 'cache_block',
          'cache_bootstrap' => 'cache_bootstrap',
          'cache_field' => 'cache_field',
          'cache_filter' => 'cache_filter',
          'cache_form' => 'cache_form',
          'cache_menu' => 'cache_menu',
          'cache_page' => 'cache_page',
          'cache_path' => 'cache_path',
          'cache_update' => 'cache_update',
          'sessions' => 'sessions',
          'watchdog' => 'watchdog',
        ),
        'utils_lock_tables' => 0,
      ),
      'files' => array(
        'exclude_filepaths' => 'backup_migrate
styles
css
js
ctools
less',
      ),
      'archive' => array(
        'exclude_filepaths' => 'public://backup_migrate
public://styles
public://css
public://js
public://ctools
public://less
private://backup_migrate
sites/nci-itcr/settings.php
/tmp',
      ),
    ),
  );
  $export['2952'] = $item;

  return $export;
}
