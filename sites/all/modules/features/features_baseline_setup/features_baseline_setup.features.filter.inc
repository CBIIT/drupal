<?php
/**
 * @file
 * features_baseline_setup.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function features_baseline_setup_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'filter_html' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'spamspan' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
          'spamspan_dot_enable' => 0,
          'spamspan_dot' => ' [dot] ',
          'spamspan_use_form' => FALSE,
          'spamspan_use_url' => '<a href="/#formname?goto=#email">#displaytext</a>',
          'spamspan_email_encode' => TRUE,
          'spamspan_email_default' => 'contact_us_general_enquiry',
          'use_form' => array(
            'spamspan_use_form' => 0,
            'spamspan_use_url' => '<a href="/#formname?goto=#email">#displaytext</a>',
            'spamspan_email_encode' => 1,
            'spamspan_email_default' => 'contact_us_general_enquiry',
          ),
        ),
      ),
      'filter_autop' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
    'filters' => array(
      'filter_url' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'spamspan' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
          'spamspan_dot_enable' => 0,
          'spamspan_dot' => ' [dot] ',
          'spamspan_use_form' => FALSE,
          'spamspan_use_url' => '<a href="/#formname?goto=#email">#displaytext</a>',
          'spamspan_email_encode' => TRUE,
          'spamspan_email_default' => 'contact_us_general_enquiry',
          'use_form' => array(
            'spamspan_use_form' => 0,
            'spamspan_use_url' => '<a href="/#formname?goto=#email">#displaytext</a>',
            'spamspan_email_encode' => 1,
            'spamspan_email_default' => 'contact_us_general_enquiry',
          ),
        ),
      ),
      'filter_autop' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Only HTML.
  $formats['only_html'] = array(
    'format' => 'only_html',
    'name' => 'Only HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'spamspan' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
          'spamspan_dot_enable' => 0,
          'spamspan_dot' => ' [dot] ',
          'spamspan_use_form' => FALSE,
          'spamspan_use_url' => '<a href="/#formname?goto=#email">#displaytext</a>',
          'spamspan_email_encode' => TRUE,
          'spamspan_email_default' => 'contact_us_general_enquiry',
          'use_form' => array(
            'spamspan_use_form' => 0,
            'spamspan_use_url' => '<a href="/#formname?goto=#email">#displaytext</a>',
            'spamspan_email_encode' => 1,
            'spamspan_email_default' => 'contact_us_general_enquiry',
          ),
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => -7,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
