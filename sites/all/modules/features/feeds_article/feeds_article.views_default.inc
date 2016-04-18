<?php
/**
 * @file
 * feeds_article.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feeds_article_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'top_5_articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Top 5 Articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '13';
  $handler->display->display_options['pager']['options']['offset'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'front_page';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Score (field_score) */
  $handler->display->display_options['sorts']['field_score_value']['id'] = 'field_score_value';
  $handler->display->display_options['sorts']['field_score_value']['table'] = 'field_data_field_score';
  $handler->display->display_options['sorts']['field_score_value']['field'] = 'field_score_value';
  $handler->display->display_options['sorts']['field_score_value']['order'] = 'DESC';
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Score (field_score) */
  $handler->display->display_options['filters']['field_score_value']['id'] = 'field_score_value';
  $handler->display->display_options['filters']['field_score_value']['table'] = 'field_data_field_score';
  $handler->display->display_options['filters']['field_score_value']['field'] = 'field_score_value';
  $handler->display->display_options['filters']['field_score_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_score_value']['value']['value'] = '0';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Top 5 Block */
  $handler = $view->new_display('block', 'Top 5 Block', 'block');
  $handler->display->display_options['display_description'] = 'Top 5 Articles Block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: Next 13 */
  $handler = $view->new_display('block', 'Next 13', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Next 13 Articles Block';
  $handler->display->display_options['display_description'] = 'Next 13 articles';

  /* Display: Top 5 Articles Page */
  $handler = $view->new_display('page', 'Top 5 Articles Page', 'page_1');
  $handler->display->display_options['display_description'] = 'Top 5 Articles Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'front_page';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'home';
  $export['top_5_articles'] = $view;

  return $export;
}
