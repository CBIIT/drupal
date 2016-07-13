<?php

/**
 * @file
 * Configuration file for Drupal's multi-site directory aliasing feature.
 *
 * This file allows you to define a set of aliases that map hostnames, ports, and
 * pathnames to configuration directories in the sites directory. These aliases
 * are loaded prior to scanning for directories, and they are exempt from the
 * normal discovery rules. See default.settings.php to view how Drupal discovers
 * the configuration directory when no alias is found.
 *
 * Aliases are useful on development servers, where the domain name may not be
 * the same as the domain of the live server. Since Drupal stores file paths in
 * the database (files, system table, etc.) this will ensure the paths are
 * correct when the site is deployed to a live server.
 *
 * To use this file, copy and rename it such that its path plus filename is
 * 'sites/sites.php'. If you don't need to use multi-site directory aliasing,
 * then you can safely ignore this file, and Drupal will ignore it too.
 *
 * Aliases are defined in an associative array named $sites. The array is
 * written in the format: '<port>.<domain>.<path>' => 'directory'. As an
 * example, to map http://www.drupal.org:8080/mysite/test to the configuration
 * directory sites/example.com, the array should be defined as:
 * @code
 * $sites = array(
 *   '8080.www.drupal.org.mysite.test' => 'example.com',
 * );
 * @endcode
 * The URL, http://www.drupal.org:8080/mysite/test/, could be a symbolic link or
 * an Apache Alias directive that points to the Drupal root containing
 * index.php. An alias could also be created for a subdomain. See the
 * @link http://drupal.org/documentation/install online Drupal installation guide @endlink
 * for more information on setting up domains, subdomains, and subdirectories.
 *
 * The following examples look for a site configuration in sites/example.com:
 * @code
 * URL: http://dev.drupal.org
 * $sites['dev.drupal.org'] = 'example.com';
 *
 * URL: http://localhost/example
 * $sites['localhost.example'] = 'example.com';
 *
 * URL: http://localhost:8080/example
 * $sites['8080.localhost.example'] = 'example.com';
 *
 * URL: http://www.drupal.org:8080/mysite/test/
 * $sites['8080.www.drupal.org.mysite.test'] = 'example.com';
 * @endcode
 *
 * @see default.settings.php
 * @see conf_path()
 * @see http://drupal.org/documentation/install/multi-site
 */

/* SERVER DEFAULTS */
// Local
$sites['127.0.0.1']                           = 'default';
// AWS/Dev
$sites['50.17.223.185']                       = 'default';
// AWS/QA
$sites['174.129.249.95']                      = 'default';
// NCI/Dev 
$sites['10.133.108.118']                      = 'default';
// NCI/Stage
$sites['10.133.202.147']                      = 'default';
// NCI/Prod - varies

/* BRIDG */
$sites['nci-bridg.local']                     = 'nci-bridg';
$sites['nci-bridg.dev']                       = 'nci-bridg';
$sites['nci-bridg.qa']                        = 'nci-bridg';
$sites['nci-bridg.nci']                       = 'nci-bridg';
$sites['bridgmodel-dev-sg.nci.nih.gov']       = 'nci-bridg';
$sites['bridgmodel-stage-sg.nci.nih.gov']     = 'nci-bridg';
$sites['bridgmodel.nci.nih.gov']              = 'nci-bridg';
$sites['bridgmodel.org']                      = 'nci-bridg';

/* EMICE */
$sites['nci-emice.local']                     = 'nci-emice';
$sites['nci-emice.dev']                       = 'nci-emice';
$sites['nci-emice.qa']                        = 'nci-emice';
$sites['nci-emice.nci']                       = 'nci-emice';
$sites['emice-dev-sg.nci.nih.gov']            = 'nci-emice';
$sites['emice-stage-sg.nci.nih.gov']          = 'nci-emice';
$sites['emice-stage-sg.nci.nih.gov']          = 'nci-emice';
$sites['emice.nci.nih.gov']                   = 'nci-emice';

/* EVS */
$sites['nci-evs.local']                       = 'nci-evs';
$sites['nci-evs.dev']                         = 'nci-evs';
$sites['nci-evs.qa']                          = 'nci-evs';
$sites['nci-evs.nci']                         = 'nci-evs';
$sites['evs-dev-sg.nci.nih.gov']              = 'nci-evs';
$sites['evs-stage-sg.nci.nih.gov']            = 'nci-evs';
$sites['evs.nci.nih.gov']                     = 'nci-evs';

/* FDACFD */
$sites['nci-fdacfd.local']                    = 'nci-fdacfd';
$sites['nci-fdacfd.dev']                      = 'nci-fdacfd';
$sites['nci-fdacfd.qa']                       = 'nci-fdacfd';
$sites['nci-fdacfd.nci']                      = 'nci-fdacfd';
$sites['fdacfd-dev-sg.nci.nih.gov']           = 'nci-fdacfd';
$sites['fdacfd-stage-sg.nci.nih.gov']         = 'nci-fdacfd';
$sites['fdacfd.nci.nih.gov']                  = 'nci-fdacfd';

/* ICBP */
$sites['nci-icbp.local']                      = 'nci-icbp';
$sites['nci-icbp.dev']                        = 'nci-icbp';
$sites['nci-icbp.qa']                         = 'nci-icbp';
$sites['nci-icbp.nci']                        = 'nci-icbp';
$sites['icbp-dev-sg.nci.nih.gov']             = 'nci-icbp';
$sites['icbp-stage-sg.nci.nih.gov']           = 'nci-icbp';
$sites['icbp.nci.nih.gov']                    = 'nci-icbp';

/* ITCR */
$sites['nci-itcr.local']                      = 'nci-itcr';
$sites['nci-itcr.dev']                        = 'nci-itcr';
$sites['nci-itcr.qa']                         = 'nci-itcr';
$sites['nci-itcr.nci']                        = 'nci-itcr';
$sites['itcr-dev-sg.nci.nih.gov']             = 'nci-itcr';
$sites['itcr-stage-sg.nci.nih.gov']           = 'nci-itcr';
$sites['itcr.nci.nih.gov']                    = 'nci-itcr';

/* NCTN Data Archive */
$sites['nci-nctn.local']                      = 'nci-nctn';
$sites['nci-nctn.dev']                        = 'nci-nctn';
$sites['nci-nctn.qa']                         = 'nci-nctn';
$sites['nci-nctn.nci']                        = 'nci-nctn';
$sites['nctn-dev.nci.nih.gov']                = 'nci-nctn';
$sites['nctn-data-archive-stage.nci.nih.gov'] = 'nci-nctn';
$sites['nctn-data-archive.nci.nih.gov']       = 'nci-nctn';

/* Remote Apps */
$sites['nci-remoteapps.local']                = 'nci-remote-apps';
$sites['nci-remoteapps.dev']                  = 'nci-remote-apps';
$sites['nci-remoteapps.qa']                   = 'nci-remote-apps';
$sites['nci-remoteapps.nci']                  = 'nci-remote-apps';
$sites['remoteapps-dev-sg.nci.nih.gov']       = 'nci-remote-apps';
$sites['remoteapps-stage-sg.nci.nih.gov']     = 'nci-remote-apps';
$sites['remoteapps.nci.nih.gov']              = 'nci-remote-apps';

/* SPL */
$sites['nci-spl.local']                       = 'nci-spl';
$sites['nci-spl.dev']                         = 'nci-spl';
$sites['nci-spl.qa']                          = 'nci-spl';
$sites['nci-spl.nci']                         = 'nci-spl';
$sites['spl-dev-sg.nci.nih.gov']              = 'nci-spl';
$sites['spl-stage-sg.nci.nih.gov']            = 'nci-spl';
$sites['spl.nci.nih.gov']                     = 'nci-spl';
