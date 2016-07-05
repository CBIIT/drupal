<?php

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 *hook_drush_help - implement drush help.
 * @param type $command
 * @return type 
 */
function nci_SSO_drush_help($command) {
    switch($command) {
        case 'drush:set-sso': 
            return dt('Set SSO configuration for the NCI SSO Module. Options: NCI_SSO_MODE_ONLY_SSO, NCI_SSO_MODE_MIXED, NCI_SSO_MODE_AUTO_LOGIN');
        case 'drush:set-sso-autocreate':    
            return dt('Set SSO configuration for the NCI SSO Module to enable auto-account creation. Options: TRUE or FALSE');
    }
}


/**
 * Implements hook_drush_command().
 */
function nci_SSO_drush_command() {
  $items = array();
  $items['set-sso'] = array(
    'aliases' => array('setsso'),
    'description' => 'Set SSO configuration for the NCI SSO Module. Options: NCI_SSO_MODE_ONLY_SSO, NCI_SSO_MODE_MIXED, NCI_SSO_MODE_AUTO_LOGIN',
    'arguments' => array(
      'module'    => 'nci_SSO',
    ),
    'options' => array(
      'subdir' => 'The name of the sub directory to create the module in. Defaults to ctools_export which will be placed into sites/all/modules.',
      'remove' => 'Remove existing files before writing, except the .module file.',
    ),
    'drupal dependencies' => array('bulk_export'),
    'examples' => array(
      'drush ctex export_module' => 'Export CTools exportables to a module called "export_module".',
      'drush ctex export_module --subdir=exports' => 'Same as above, but into the sites/all/modules/exports directory.',
      'drush ctex export_module --subdir=exports --remove' => 'Same as above, but automatically removing all files, except for the .module file.',
    ),
  );
    $items['set-sso-autocreate'] = array(
    'aliases' => array('setssoauto'),
    'description' => 'Set SSO configuration for the NCI SSO Module to autocreate accounts. Options: TRUE or FALSE',
    'arguments' => array(
      'module'    => 'nci_SSO',
    ),
    'options' => array(
      'subdir' => 'The name of the sub directory to create the module in. Defaults to ctools_export which will be placed into sites/all/modules.',
      'remove' => 'Remove existing files before writing, except the .module file.',
    ),
    'drupal dependencies' => array('bulk_export'),
    'examples' => array(
      'drush ctex export_module' => 'Export CTools exportables to a module called "export_module".',
      'drush ctex export_module --subdir=exports' => 'Same as above, but into the sites/all/modules/exports directory.',
      'drush ctex export_module --subdir=exports --remove' => 'Same as above, but automatically removing all files, except for the .module file.',
    ),
  );

}


/**
 *implement drush set-sso command.
 * @param type $arg1 
 */
function drush_nci_SSO_set_sso(){
    
    $arg1 = drush_get_option('arg1');
    if($arg1 == NCI_SSO_MODE_ONLY_SSO ||
          $arg1 ==  NCI_SSO_MODE_MIXED ||
           $arg1 == NCI_SSO_MODE_AUTO_LOGIN){
    variable_set('nci_sso_login_mode', $arg1);
    drush_log('set nci_sso_login_mode', 'OK');
    return;
           }
         drush_log('failed set nci_sso_login_mode', 'error');  
           
}

/**
 *implement drush set-sso-autocreate command.
 * @param type $arg1 
 */
function drush_nci_SSO_set_sso_autocreate(){
    
    $arg1 = drush_get_option('arg1');
    if($arg1 == TRUE ||FALSE){
    variable_set('nci_sso_autocreate', $arg1);
    drush_log('set nci_sso_autocreate', 'OK');
    return;
           }
         drush_log('failed set nci_sso_autocreate', 'error');  
           
}

?>
