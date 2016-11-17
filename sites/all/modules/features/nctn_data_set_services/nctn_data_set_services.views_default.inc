<?php
/**
 * @file
 * nctn_data_set_services.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nctn_data_set_services_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'request_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'request view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'request view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Research Plan Title */
  $handler->display->display_options['fields']['field_request_research_title']['id'] = 'field_request_research_title';
  $handler->display->display_options['fields']['field_request_research_title']['table'] = 'field_data_field_request_research_title';
  $handler->display->display_options['fields']['field_request_research_title']['field'] = 'field_request_research_title';
  /* Field: Content: Research Plan Description */
  $handler->display->display_options['fields']['field_research_description']['id'] = 'field_research_description';
  $handler->display->display_options['fields']['field_research_description']['table'] = 'field_data_field_research_description';
  $handler->display->display_options['fields']['field_research_description']['field'] = 'field_research_description';
  /* Field: Content: NCT Trial Number(s) */
  $handler->display->display_options['fields']['field_request_trial_nct_number']['id'] = 'field_request_trial_nct_number';
  $handler->display->display_options['fields']['field_request_trial_nct_number']['table'] = 'field_data_field_request_trial_nct_number';
  $handler->display->display_options['fields']['field_request_trial_nct_number']['field'] = 'field_request_trial_nct_number';
  $handler->display->display_options['fields']['field_request_trial_nct_number']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_request_trial_nct_number']['delta_offset'] = '0';
  /* Field: Content: Other Approved Users */
  $handler->display->display_options['fields']['field_request_data_viewer_fields']['id'] = 'field_request_data_viewer_fields';
  $handler->display->display_options['fields']['field_request_data_viewer_fields']['table'] = 'field_data_field_request_data_viewer_fields';
  $handler->display->display_options['fields']['field_request_data_viewer_fields']['field'] = 'field_request_data_viewer_fields';
  $handler->display->display_options['fields']['field_request_data_viewer_fields']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_request_data_viewer_fields']['delta_offset'] = '0';
  /* Field: Content: Name of Authorized Representative */
  $handler->display->display_options['fields']['field_request_aor_name']['id'] = 'field_request_aor_name';
  $handler->display->display_options['fields']['field_request_aor_name']['table'] = 'field_data_field_request_aor_name';
  $handler->display->display_options['fields']['field_request_aor_name']['field'] = 'field_request_aor_name';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_request_aor_title']['id'] = 'field_request_aor_title';
  $handler->display->display_options['fields']['field_request_aor_title']['table'] = 'field_data_field_request_aor_title';
  $handler->display->display_options['fields']['field_request_aor_title']['field'] = 'field_request_aor_title';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_request_aor_email']['id'] = 'field_request_aor_email';
  $handler->display->display_options['fields']['field_request_aor_email']['table'] = 'field_data_field_request_aor_email';
  $handler->display->display_options['fields']['field_request_aor_email']['field'] = 'field_request_aor_email';
  /* Field: Content: Signed DUA */
  $handler->display->display_options['fields']['field_request_dua_file_id']['id'] = 'field_request_dua_file_id';
  $handler->display->display_options['fields']['field_request_dua_file_id']['table'] = 'field_data_field_request_dua_file_id';
  $handler->display->display_options['fields']['field_request_dua_file_id']['field'] = 'field_request_dua_file_id';
  $handler->display->display_options['fields']['field_request_dua_file_id']['click_sort_column'] = 'fid';
  /* Field: Content: DUA Status */
  $handler->display->display_options['fields']['field_request_dua_status']['id'] = 'field_request_dua_status';
  $handler->display->display_options['fields']['field_request_dua_status']['table'] = 'field_data_field_request_dua_status';
  $handler->display->display_options['fields']['field_request_dua_status']['field'] = 'field_request_dua_status';
  /* Field: Content: Request Status */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'request' => 'request',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'request-view';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'key';
  $export['request_view'] = $view;

  return $export;
}
