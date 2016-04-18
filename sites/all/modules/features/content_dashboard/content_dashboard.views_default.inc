<?php
/**
 * @file
 * content_dashboard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function content_dashboard_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_dashboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dashboard - Articles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_score' => 'field_score',
    'field_highest_relevance' => 'field_highest_relevance',
    'field_section' => 'field_section',
    'field_imported_source_link' => 'field_imported_source_link',
    'field_image' => 'field_image',
  );
  $handler->display->display_options['style_options']['default'] = 'field_score';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_score' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_highest_relevance' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_section' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_imported_source_link' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Score */
  $handler->display->display_options['fields']['field_score']['id'] = 'field_score';
  $handler->display->display_options['fields']['field_score']['table'] = 'field_data_field_score';
  $handler->display->display_options['fields']['field_score']['field'] = 'field_score';
  $handler->display->display_options['fields']['field_score']['label'] = 'Score Now';
  $handler->display->display_options['fields']['field_score']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Highest Relevance */
  $handler->display->display_options['fields']['field_highest_relevance']['id'] = 'field_highest_relevance';
  $handler->display->display_options['fields']['field_highest_relevance']['table'] = 'field_data_field_highest_relevance';
  $handler->display->display_options['fields']['field_highest_relevance']['field'] = 'field_highest_relevance';
  $handler->display->display_options['fields']['field_highest_relevance']['label'] = 'Original Relevance';
  $handler->display->display_options['fields']['field_highest_relevance']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Section */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Score (field_score) */
  $handler->display->display_options['sorts']['field_score_value']['id'] = 'field_score_value';
  $handler->display->display_options['sorts']['field_score_value']['table'] = 'field_data_field_score';
  $handler->display->display_options['sorts']['field_score_value']['field'] = 'field_score_value';
  $handler->display->display_options['sorts']['field_score_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_score_value']['expose']['label'] = 'Score';
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_tid']['field'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_section_tid']['expose']['operator_id'] = 'field_section_tid_op';
  $handler->display->display_options['filters']['field_section_tid']['expose']['label'] = 'Section';
  $handler->display->display_options['filters']['field_section_tid']['expose']['operator'] = 'field_section_tid_op';
  $handler->display->display_options['filters']['field_section_tid']['expose']['identifier'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_section_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_section_tid']['vocabulary'] = 'sections';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Articles */
  $handler = $view->new_display('page', 'Articles', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Content: Score */
  $handler->display->display_options['fields']['field_score']['id'] = 'field_score';
  $handler->display->display_options['fields']['field_score']['table'] = 'field_data_field_score';
  $handler->display->display_options['fields']['field_score']['field'] = 'field_score';
  $handler->display->display_options['fields']['field_score']['label'] = 'Score Now';
  $handler->display->display_options['fields']['field_score']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Highest Relevance */
  $handler->display->display_options['fields']['field_highest_relevance']['id'] = 'field_highest_relevance';
  $handler->display->display_options['fields']['field_highest_relevance']['table'] = 'field_data_field_highest_relevance';
  $handler->display->display_options['fields']['field_highest_relevance']['field'] = 'field_highest_relevance';
  $handler->display->display_options['fields']['field_highest_relevance']['label'] = 'Original Relevance';
  $handler->display->display_options['fields']['field_highest_relevance']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Section */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Imported Source Link */
  $handler->display->display_options['fields']['field_imported_source_link']['id'] = 'field_imported_source_link';
  $handler->display->display_options['fields']['field_imported_source_link']['table'] = 'field_data_field_imported_source_link';
  $handler->display->display_options['fields']['field_imported_source_link']['field'] = 'field_imported_source_link';
  $handler->display->display_options['fields']['field_imported_source_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_imported_source_link']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_imported_source_link']['settings'] = array(
    'strip_www' => 1,
  );
  /* Field: Has Image? */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['ui_name'] = 'Has Image?';
  $handler->display->display_options['fields']['field_image']['label'] = 'Has Image?';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = 'YES';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<span class="error">NO</span>';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_tid']['field'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_section_tid']['expose']['operator_id'] = 'field_section_tid_op';
  $handler->display->display_options['filters']['field_section_tid']['expose']['label'] = 'Section';
  $handler->display->display_options['filters']['field_section_tid']['expose']['operator'] = 'field_section_tid_op';
  $handler->display->display_options['filters']['field_section_tid']['expose']['identifier'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_section_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_section_tid']['vocabulary'] = 'sections';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Imported Source Link (field_imported_source_link:title) */
  $handler->display->display_options['filters']['field_imported_source_link_title']['id'] = 'field_imported_source_link_title';
  $handler->display->display_options['filters']['field_imported_source_link_title']['table'] = 'field_data_field_imported_source_link';
  $handler->display->display_options['filters']['field_imported_source_link_title']['field'] = 'field_imported_source_link_title';
  $handler->display->display_options['filters']['field_imported_source_link_title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_imported_source_link_title']['expose']['operator_id'] = 'field_imported_source_link_title_op';
  $handler->display->display_options['filters']['field_imported_source_link_title']['expose']['label'] = 'Imported Source';
  $handler->display->display_options['filters']['field_imported_source_link_title']['expose']['operator'] = 'field_imported_source_link_title_op';
  $handler->display->display_options['filters']['field_imported_source_link_title']['expose']['identifier'] = 'field_imported_source_link_title';
  $handler->display->display_options['filters']['field_imported_source_link_title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/dashboard/articles';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Dashboard - Articles';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Feeds */
  $handler = $view->new_display('page', 'Feeds', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dashboard - Feeds';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="/node/add/feed?destination=admin/content/dashboard/feeds">Add another Feed</a>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'feed' => 'feed',
  );
  $handler->display->display_options['path'] = 'admin/content/dashboard/feeds';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Dashboard - Feeds';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['content_dashboard'] = $view;

  return $export;
}
