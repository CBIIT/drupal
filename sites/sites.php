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

/* SERVERS 
 * =======
 * Localhost:  127.0.0.1
 * AWS/Dev:    50.17.223.185
 * AWS/QA:     174.129.249.95
 * NCI/Dev1:   10.133.108.118
 * NCI/Dev2:   10.133.108.132
 * NCI/Stage1: 10.133.104.131
 * NCI/Stage2: 10.133.104.132
 * NCI/Prod1:  10.133.210.107
 * NCI/Prod2:  10.133.210.108
 */


#nci-metastatic-niche.local
$sites['nci-metastatic-niche.local']                           = 'nci-metastatic-niche';
$sites['nci-metastatic-niche.dev']                           = 'nci-metastatic-niche';

/* FIRST CLUSTER 
 * =============
 */

/* BRIDG */
$sites['nci-bridg.local']                           = 'nci-bridg';
$sites['nci-bridg.dev']                             = 'nci-bridg';
$sites['nci-bridg.qa']                              = 'nci-bridg';
$sites['nci-bridg.nci']                             = 'nci-bridg';
$sites['bridgmodel-dev-sg.nci.nih.gov']             = 'nci-bridg';
$sites['bridgmodel-stage-sg.nci.nih.gov']           = 'nci-bridg';
$sites['bridgmodel.nci.nih.gov']                    = 'nci-bridg';
$sites['bridgmodel.org']                            = 'nci-bridg';

/* CBIIT */
$sites['nci-cbiit.local']                           = 'nci-cbiit';
$sites['nci-cbiit.dev']                             = 'nci-cbiit';
$sites['nci-cbiit.qa']                              = 'nci-cbiit';
$sites['nci-cbiit.nci']                             = 'nci-cbiit';
$sites['cbiit-dev-sg.nci.nih.gov']                  = 'nci-cbiit';
$sites['cbiit-stage-sg.nci.nih.gov']                = 'nci-cbiit';
$sites['cbiit-stage-sg.nci.nih.gov']                = 'nci-cbiit';
$sites['cbiit.nci.nih.gov']                         = 'nci-cbiit';

/* EMICE */
$sites['nci-emice.local']                           = 'nci-emice';
$sites['nci-emice.dev']                             = 'nci-emice';
$sites['nci-emice.qa']                              = 'nci-emice';
$sites['nci-emice.nci']                             = 'nci-emice';
$sites['emice-dev-sg.nci.nih.gov']                  = 'nci-emice';
$sites['emice-stage-sg.nci.nih.gov']                = 'nci-emice';
$sites['emice-stage-sg.nci.nih.gov']                = 'nci-emice';
$sites['emice.nci.nih.gov']                         = 'nci-emice';

/* ITCR */
$sites['nci-itcr.local']                            = 'nci-itcr';
$sites['nci-itcr.dev']                              = 'nci-itcr';
$sites['nci-itcr.qa']                               = 'nci-itcr';
$sites['nci-itcr.nci']                              = 'nci-itcr';
$sites['itcr-dev-sg.nci.nih.gov']                   = 'nci-itcr';
$sites['itcr-stage-sg.nci.nih.gov']                 = 'nci-itcr';
$sites['itcr.nci.nih.gov']                          = 'nci-itcr';

/* NCS */
$sites['nci-ncs.local']                             = 'nci-ncs';
$sites['nci-ncs.dev']                               = 'nci-ncs';
$sites['nci-ncs.qa']                                = 'nci-ncs';
$sites['nci-ncs.nci']                               = 'nci-ncs';
$sites['ncs-dev-sg.cancer.gov']                     = 'nci-ncs';
$sites['ncs-stage-sg.cancer.gov']                   = 'nci-ncs';
$sites['ncs.nci.nih.gov']                           = 'nci-ncs';

/* NCTN DATA ARCHIVE */
$sites['nci-nctn.local']                            = 'nci-nctn';
$sites['nci-nctn.dev']                              = 'nci-nctn';
$sites['nci-nctn.qa']                               = 'nci-nctn';
$sites['nci-nctn.nci']                              = 'nci-nctn';
$sites['nctn-dev.nci.nih.gov']                      = 'nci-nctn';
$sites['nctn-data-archive-stage.nci.nih.gov']       = 'nci-nctn';
$sites['nctn-data-archive.nci.nih.gov']             = 'nci-nctn';

/* SECOND CLUSTER 
 * ==============
 */

/* EVS */
$sites['nci-evs.local']                             = 'nci-evs';
$sites['nci-evs.dev']                               = 'nci-evs';
$sites['nci-evs.qa']                                = 'nci-evs';
$sites['nci-evs.nci']                               = 'nci-evs';
$sites['evs-dev-sg.nci.nih.gov']                    = 'nci-evs';
$sites['evs-stage-sg.nci.nih.gov']                  = 'nci-evs';
$sites['evs.nci.nih.gov']                           = 'nci-evs';

/* FDACFD */
$sites['nci-fdacfd.local']                          = 'nci-fdacfd';
$sites['nci-fdacfd.dev']                            = 'nci-fdacfd';
$sites['nci-fdacfd.qa']                             = 'nci-fdacfd';
$sites['nci-fdacfd.nci']                            = 'nci-fdacfd';
$sites['fdacfd-dev-sg.nci.nih.gov']                 = 'nci-fdacfd';
$sites['fdacfd-stage-sg.nci.nih.gov']               = 'nci-fdacfd';
$sites['fdacfd.nci.nih.gov']                        = 'nci-fdacfd';

/* ICBP */
$sites['nci-icbp.local']                            = 'nci-icbp';
$sites['nci-icbp.dev']                              = 'nci-icbp';
$sites['nci-icbp.qa']                               = 'nci-icbp';
$sites['nci-icbp.nci']                              = 'nci-icbp';
$sites['icbp-dev-sg.nci.nih.gov']                   = 'nci-icbp';
$sites['icbp-stage-sg.nci.nih.gov']                 = 'nci-icbp';
$sites['icbp.nci.nih.gov']                          = 'nci-icbp';

/* PROVOCATIVE QUESTIONS */
$sites['nci-provocativeqs.local']                   = 'nci-provocativeqs';
$sites['nci-provocativeqs.dev']                     = 'nci-provocativeqs';
$sites['nci-provocativeqs.qa']                      = 'nci-provocativeqs';
$sites['nci-provocativeqs.nci']                     = 'nci-provocativeqs';
$sites['provocativequestions-dev-sg.nci.nih.gov']   = 'nci-provocativeqs';
$sites['provocativequestions-stage-sg.nci.nih.gov'] = 'nci-provocativeqs';
$sites['provocativequestions.nci.nih.gov']          = 'nci-provocativeqs';

/* SPL */
$sites['nci-spl.local']                             = 'nci-spl';
$sites['nci-spl.dev']                               = 'nci-spl';
$sites['nci-spl.qa']                                = 'nci-spl';
$sites['nci-spl.nci']                               = 'nci-spl';
$sites['spl-dev-sg.nci.nih.gov']                    = 'nci-spl';
$sites['spl-stage-sg.nci.nih.gov']                  = 'nci-spl';
$sites['spl.nci.nih.gov']                           = 'nci-spl';

/* OTHER 
 * =====
 */

/* REMOTE APPS */
$sites['nci-remoteapps.local']                      = 'nci-remoteapps';
$sites['nci-remoteapps.dev']                        = 'nci-remoteapps';
$sites['nci-remoteapps.qa']                         = 'nci-remoteapps';
$sites['nci-remoteapps.nci']                        = 'nci-remoteapps';
$sites['remoteapps-dev-sg.nci.nih.gov']             = 'nci-remoteapps';
$sites['remoteapps-stage-sg.nci.nih.gov']           = 'nci-remoteapps';
$sites['remoteapps.nci.nih.gov']                    = 'nci-remoteapps';
