<?php
/**
 * @file
 * new_data_feed.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function new_data_feed_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'request_view';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'data-archive';
  $endpoint->authentication = array(
    'services_basic_auth' => 'services_basic_auth',
  );
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'data-set-services' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'views' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['request_view'] = $endpoint;

  return $export;
}
