<?php
/**
 * @file
 * basic_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function basic_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_508_compliant';
  $strongarm->value = 0;
  $export['addthis_508_compliant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_addressbook_enabled';
  $strongarm->value = 0;
  $export['addthis_addressbook_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_block_widget_settings';
  $strongarm->value = array(
    'share_services' => 'facebook,twitter,pinterest',
    'buttons_size' => 'addthis_16x16_style',
    'counter_orientation' => 'horizontal',
    'extra_css' => '',
  );
  $export['addthis_block_widget_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_block_widget_type';
  $strongarm->value = 'addthis_basic_toolbox';
  $export['addthis_block_widget_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_bookmark_url';
  $strongarm->value = 'http://www.addthis.com/bookmark.php?v=300';
  $export['addthis_bookmark_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_clickback_tracking_enabled';
  $strongarm->value = 1;
  $export['addthis_clickback_tracking_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_click_to_open_compact_menu_enabled';
  $strongarm->value = 0;
  $export['addthis_click_to_open_compact_menu_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_co_brand';
  $strongarm->value = '';
  $export['addthis_co_brand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_custom_configuration_code';
  $strongarm->value = 'var addthis_config = {}';
  $export['addthis_custom_configuration_code'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_custom_configuration_code_enabled';
  $strongarm->value = 0;
  $export['addthis_custom_configuration_code_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_enabled_services';
  $strongarm->value = array(
    'facebook' => 'facebook',
    'twitter' => 'twitter',
    'pinterest' => 'pinterest',
    'google_plusone_share' => 'google_plusone_share',
    'aim' => 0,
    'amazonwishlist' => 0,
    'bitly' => 0,
    'blogmarks' => 0,
    'delicious' => 0,
    'digg' => 0,
    'diigo' => 0,
    'faves' => 0,
    'google' => 0,
    'hatena' => 0,
    'linkedin' => 0,
    'meneame' => 0,
    'netvibes' => 0,
    'netvouz' => 0,
    'newsvine' => 0,
    'nujij' => 0,
    'reddit' => 0,
    'stumbleupon' => 0,
    'thisnext' => 0,
    'tumblr' => 0,
    'myspace' => 0,
    'livejournal' => 0,
    'gmail' => 0,
    'hotmail' => 0,
    'yahoomail' => 0,
    'aolmail' => 0,
    'googletranslate' => 0,
    'blogger' => 0,
    'wordpress' => 0,
    'typepad' => 0,
    'yammer' => 0,
    'oknotizie' => 0,
    'oyyla' => 0,
    'favoritus' => 0,
    'startaid' => 0,
    'svejo' => 0,
    'symbaloo' => 0,
    'yoolink' => 0,
    'youmob' => 0,
    'n4g' => 0,
    'folkd' => 0,
    'evernote' => 0,
    'stumpedia' => 0,
    'studivz' => 0,
    'print' => 0,
    'favorites' => 0,
    'email' => 0,
    'pusha' => 0,
    'wykop' => 0,
    'kledy' => 0,
    'plurk' => 0,
    'citeulike' => 0,
    'care2' => 0,
    'baidu' => 0,
    'printfriendly' => 0,
    'arto' => 0,
    'sodahead' => 0,
    'viadeo' => 0,
    'amenme' => 0,
    'virb' => 0,
    'bizsugar' => 0,
    'bobrdobr' => 0,
    'smiru' => 0,
    'stuffpit' => 0,
    'fabulously40' => 0,
    'yorumcuyum' => 0,
    'hackernews' => 0,
    'bonzobox' => 0,
    'meinvz' => 0,
    'visitezmonsite' => 0,
    'memori' => 0,
    'diggita' => 0,
    'linkuj' => 0,
    'tuenti' => 0,
    'informazione' => 0,
    'startlap' => 0,
    'moemesto' => 0,
    '100zakladok' => 0,
    'domaintoolswhois' => 0,
    'quantcast' => 0,
    'w3validator' => 0,
    'hedgehogs' => 0,
    'cosmiq' => 0,
    'instapaper' => 0,
    'ziczac' => 0,
    'adifni' => 0,
    'favable' => 0,
    'camyoo' => 0,
    'mailto' => 0,
    'box' => 0,
    'bookmarkycz' => 0,
    'bookmerkende' => 0,
    'posteezy' => 0,
    'zakladoknet' => 0,
    'douban' => 0,
    'pdfmyurl' => 0,
    'sinaweibo' => 0,
    'rediff' => 0,
    'markme' => 0,
    'naszaklasa' => 0,
    'vybralisme' => 0,
    'mymailru' => 0,
    'qzone' => 0,
    'vk' => 0,
    'xing' => 0,
    'fashiolista' => 0,
    'newsmeback' => 0,
    'iorbix' => 0,
    'urlaubswerkde' => 0,
    'mrcnetworkit' => 0,
    'pafnetde' => 0,
    'spinsnap' => 0,
    'technerd' => 0,
    'thefreedictionary' => 0,
    'yuuby' => 0,
    'efactor' => 0,
    'adfty' => 0,
    'draugiem' => 0,
    'historious' => 0,
    'indexor' => 0,
    'facebook_like' => 0,
    'voxopolis' => 0,
    'memonic' => 0,
    'addressbar' => 0,
    'kaixin' => 0,
    'odnoklassniki_ru' => 0,
    'zingme' => 0,
    'jappy' => 0,
    'vkrugudruzei' => 0,
    'stylishhome' => 0,
    'kindleit' => 0,
    'google_plusone' => 0,
    'scoopit' => 0,
    'govn' => 0,
    'skyrock' => 0,
    'ketnooi' => 0,
    'taringa' => 0,
    'researchgate' => 0,
    'blogkeen' => 0,
    'mendeley' => 0,
    'qrsrc' => 0,
    'bland' => 0,
    'sharer' => 0,
    'safelinking' => 0,
    'cleanprint' => 0,
    'surfingbird' => 0,
    'lidar' => 0,
    'googleplus' => 0,
    'buffer' => 0,
    'beat100' => 0,
    'cssbased' => 0,
    'yookos' => 0,
    'supbro' => 0,
    'apsense' => 0,
    'cleansave' => 0,
    'openthedoor' => 0,
    'advqr' => 0,
    'pocket' => 0,
    'margarin' => 0,
    'gg' => 0,
    'foodlve' => 0,
    'thefancy' => 0,
    'mixi' => 0,
    'wishmindr' => 0,
    'pinterest_share' => 0,
    'financialjuice' => 0,
    'myvidster' => 0,
    'exchangle' => 0,
    'wanelo' => 0,
    'hootsuite' => 0,
    'whatsapp' => 0,
    'internetarchive' => 0,
    'foursquare' => 0,
    'flipboard' => 0,
    'retellity' => 0,
    'nurses_lounge' => 0,
    'kik' => 0,
    'yummly' => 0,
    'viber' => 0,
    'edcast' => 0,
    'slack' => 0,
    'link' => 0,
    'google_classroom' => 0,
    'renren' => 0,
    'tencentweibo' => 0,
    'lineme' => 0,
    'kakao' => 0,
    'telegram' => 0,
    'balatarin' => 0,
    'pinboard' => 0,
    'diary_ru' => 0,
    'trello' => 0,
    'wechat' => 0,
    'tencentqq' => 0,
    'messenger' => 0,
    'cloob' => 0,
    'facenama' => 0,
  );
  $export['addthis_enabled_services'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_excluded_services';
  $strongarm->value = array(
    'aim' => 0,
    'amazonwishlist' => 0,
    'bitly' => 0,
    'blogmarks' => 0,
    'delicious' => 0,
    'digg' => 0,
    'diigo' => 0,
    'facebook' => 0,
    'faves' => 0,
    'google' => 0,
    'hatena' => 0,
    'linkedin' => 0,
    'meneame' => 0,
    'netvibes' => 0,
    'netvouz' => 0,
    'newsvine' => 0,
    'nujij' => 0,
    'reddit' => 0,
    'stumbleupon' => 0,
    'thisnext' => 0,
    'tumblr' => 0,
    'twitter' => 0,
    'myspace' => 0,
    'livejournal' => 0,
    'gmail' => 0,
    'hotmail' => 0,
    'yahoomail' => 0,
    'aolmail' => 0,
    'googletranslate' => 0,
    'blogger' => 0,
    'wordpress' => 0,
    'typepad' => 0,
    'yammer' => 0,
    'oknotizie' => 0,
    'oyyla' => 0,
    'favoritus' => 0,
    'startaid' => 0,
    'svejo' => 0,
    'symbaloo' => 0,
    'yoolink' => 0,
    'youmob' => 0,
    'n4g' => 0,
    'folkd' => 0,
    'evernote' => 0,
    'stumpedia' => 0,
    'studivz' => 0,
    'print' => 0,
    'favorites' => 0,
    'email' => 0,
    'pusha' => 0,
    'wykop' => 0,
    'kledy' => 0,
    'plurk' => 0,
    'citeulike' => 0,
    'care2' => 0,
    'baidu' => 0,
    'printfriendly' => 0,
    'arto' => 0,
    'sodahead' => 0,
    'viadeo' => 0,
    'amenme' => 0,
    'virb' => 0,
    'bizsugar' => 0,
    'bobrdobr' => 0,
    'smiru' => 0,
    'stuffpit' => 0,
    'fabulously40' => 0,
    'yorumcuyum' => 0,
    'hackernews' => 0,
    'bonzobox' => 0,
    'meinvz' => 0,
    'visitezmonsite' => 0,
    'memori' => 0,
    'diggita' => 0,
    'linkuj' => 0,
    'tuenti' => 0,
    'informazione' => 0,
    'startlap' => 0,
    'moemesto' => 0,
    '100zakladok' => 0,
    'domaintoolswhois' => 0,
    'quantcast' => 0,
    'w3validator' => 0,
    'hedgehogs' => 0,
    'cosmiq' => 0,
    'instapaper' => 0,
    'ziczac' => 0,
    'adifni' => 0,
    'favable' => 0,
    'camyoo' => 0,
    'mailto' => 0,
    'box' => 0,
    'bookmarkycz' => 0,
    'bookmerkende' => 0,
    'posteezy' => 0,
    'zakladoknet' => 0,
    'douban' => 0,
    'pdfmyurl' => 0,
    'sinaweibo' => 0,
    'rediff' => 0,
    'markme' => 0,
    'naszaklasa' => 0,
    'vybralisme' => 0,
    'mymailru' => 0,
    'qzone' => 0,
    'vk' => 0,
    'xing' => 0,
    'fashiolista' => 0,
    'newsmeback' => 0,
    'iorbix' => 0,
    'urlaubswerkde' => 0,
    'mrcnetworkit' => 0,
    'pafnetde' => 0,
    'spinsnap' => 0,
    'technerd' => 0,
    'thefreedictionary' => 0,
    'yuuby' => 0,
    'efactor' => 0,
    'adfty' => 0,
    'draugiem' => 0,
    'historious' => 0,
    'indexor' => 0,
    'facebook_like' => 0,
    'voxopolis' => 0,
    'memonic' => 0,
    'addressbar' => 0,
    'kaixin' => 0,
    'odnoklassniki_ru' => 0,
    'zingme' => 0,
    'jappy' => 0,
    'vkrugudruzei' => 0,
    'stylishhome' => 0,
    'kindleit' => 0,
    'google_plusone' => 0,
    'scoopit' => 0,
    'govn' => 0,
    'skyrock' => 0,
    'ketnooi' => 0,
    'taringa' => 0,
    'researchgate' => 0,
    'blogkeen' => 0,
    'mendeley' => 0,
    'qrsrc' => 0,
    'bland' => 0,
    'sharer' => 0,
    'safelinking' => 0,
    'pinterest' => 0,
    'cleanprint' => 0,
    'surfingbird' => 0,
    'lidar' => 0,
    'googleplus' => 0,
    'buffer' => 0,
    'beat100' => 0,
    'cssbased' => 0,
    'yookos' => 0,
    'supbro' => 0,
    'google_plusone_share' => 0,
    'apsense' => 0,
    'cleansave' => 0,
    'openthedoor' => 0,
    'advqr' => 0,
    'pocket' => 0,
    'margarin' => 0,
    'gg' => 0,
    'foodlve' => 0,
    'thefancy' => 0,
    'mixi' => 0,
    'wishmindr' => 0,
    'pinterest_share' => 0,
    'financialjuice' => 0,
    'myvidster' => 0,
    'exchangle' => 0,
    'wanelo' => 0,
    'hootsuite' => 0,
    'whatsapp' => 0,
    'internetarchive' => 0,
    'foursquare' => 0,
    'flipboard' => 0,
    'retellity' => 0,
    'nurses_lounge' => 0,
    'kik' => 0,
    'yummly' => 0,
    'viber' => 0,
    'edcast' => 0,
    'slack' => 0,
    'link' => 0,
    'google_classroom' => 0,
    'renren' => 0,
    'tencentweibo' => 0,
    'lineme' => 0,
    'kakao' => 0,
    'telegram' => 0,
    'balatarin' => 0,
    'pinboard' => 0,
    'diary_ru' => 0,
    'trello' => 0,
    'wechat' => 0,
    'tencentqq' => 0,
    'messenger' => 0,
    'cloob' => 0,
    'facenama' => 0,
  );
  $export['addthis_excluded_services'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_facebook_like_count_support_enabled';
  $strongarm->value = 1;
  $export['addthis_facebook_like_count_support_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_google_analytics_social_tracking_enabled';
  $strongarm->value = FALSE;
  $export['addthis_google_analytics_social_tracking_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_google_analytics_tracking_enabled';
  $strongarm->value = FALSE;
  $export['addthis_google_analytics_tracking_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_open_windows_enabled';
  $strongarm->value = 0;
  $export['addthis_open_windows_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_profile_id';
  $strongarm->value = '';
  $export['addthis_profile_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_services_css_url';
  $strongarm->value = 'http://cache.addthiscdn.com/icons/v1/sprites/services.css';
  $export['addthis_services_css_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_services_json_url';
  $strongarm->value = 'http://cache.addthiscdn.com/services/v1/sharing.en.json';
  $export['addthis_services_json_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_standard_css_enabled';
  $strongarm->value = 1;
  $export['addthis_standard_css_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_twitter_template';
  $strongarm->value = '{{title}} {{url}} via @AddThis';
  $export['addthis_twitter_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_twitter_via';
  $strongarm->value = 'AddThis';
  $export['addthis_twitter_via'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_ui_delay';
  $strongarm->value = '0';
  $export['addthis_ui_delay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_ui_header_background_color';
  $strongarm->value = '';
  $export['addthis_ui_header_background_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_ui_header_color';
  $strongarm->value = '';
  $export['addthis_ui_header_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_widget_include';
  $strongarm->value = '2';
  $export['addthis_widget_include'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_widget_js_url';
  $strongarm->value = 'http://s7.addthis.com/js/300/addthis_widget.js';
  $export['addthis_widget_js_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_widget_load_async';
  $strongarm->value = 0;
  $export['addthis_widget_load_async'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_widget_load_domready';
  $strongarm->value = 1;
  $export['addthis_widget_load_domready'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_cache';
  $strongarm->value = 0;
  $export['block_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache';
  $strongarm->value = 0;
  $export['cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_class_cache_ctools_css';
  $strongarm->value = 'CToolsCssCache';
  $export['cache_class_cache_ctools_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_lifetime';
  $strongarm->value = '300';
  $export['cache_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long';
  $strongarm->value = 'l, F d Y, g:i a';
  $export['date_format_long'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'D, Y-m-d H:i';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'Y-m-d H:i';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_field_template';
  $strongarm->value = 1;
  $export['ds_extras_field_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'exif_custom_checks';
  $strongarm->value = array(
    'auto-import' => 'auto-import',
  );
  $export['exif_custom_checks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'exif_custom_default';
  $strongarm->value = 'Bigstock mapping';
  $export['exif_custom_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '5',
        ),
        'preview' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_default_scheme';
  $strongarm->value = 'public';
  $export['file_default_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_alt';
  $strongarm->value = '[file:field_file_image_alt_text]';
  $export['file_entity_alt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_default_allowed_extensions';
  $strongarm->value = 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv weba webp webm';
  $export['file_entity_default_allowed_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_fields';
  $strongarm->value = 0;
  $export['file_entity_file_upload_wizard_skip_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_file_type';
  $strongarm->value = 0;
  $export['file_entity_file_upload_wizard_skip_file_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_scheme';
  $strongarm->value = 0;
  $export['file_entity_file_upload_wizard_skip_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_max_filesize';
  $strongarm->value = '30M';
  $export['file_entity_max_filesize'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_title';
  $strongarm->value = '[file:field_file_image_title_text]';
  $export['file_entity_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'globalredirect_settings';
  $strongarm->value = array(
    'menu_check' => 1,
  );
  $export['globalredirect_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_jpeg_quality';
  $strongarm->value = '95';
  $export['image_jpeg_quality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'gd';
  $export['image_toolkit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_default_frame_height';
  $strongarm->value = '900';
  $export['lightbox2_default_frame_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_default_frame_width';
  $strongarm->value = '600';
  $export['lightbox2_default_frame_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_frame_border';
  $strongarm->value = 1;
  $export['lightbox2_frame_border'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_lite';
  $strongarm->value = FALSE;
  $export['lightbox2_lite'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_file';
  $strongarm->value = TRUE;
  $export['metatag_enable_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_file__audio';
  $strongarm->value = TRUE;
  $export['metatag_enable_file__audio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_file__document';
  $strongarm->value = TRUE;
  $export['metatag_enable_file__document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_file__image';
  $strongarm->value = FALSE;
  $export['metatag_enable_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_file__video';
  $strongarm->value = TRUE;
  $export['metatag_enable_file__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node';
  $strongarm->value = TRUE;
  $export['metatag_enable_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term';
  $strongarm->value = TRUE;
  $export['metatag_enable_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_user';
  $strongarm->value = TRUE;
  $export['metatag_enable_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_user__user';
  $strongarm->value = TRUE;
  $export['metatag_enable_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_has_revision_id';
  $strongarm->value = TRUE;
  $export['metatag_has_revision_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_schema_installed';
  $strongarm->value = TRUE;
  $export['metatag_schema_installed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_article';
  $strongarm->value = array();
  $export['node_options_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_article';
  $strongarm->value = '1';
  $export['node_preview_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_article';
  $strongarm->value = 0;
  $export['node_submitted_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'noindex_external_links_allowed_domains';
  $strongarm->value = 'gdgwebworks.com';
  $export['noindex_external_links_allowed_domains'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'noindex_external_links_denied_domains';
  $strongarm->value = '';
  $export['noindex_external_links_denied_domains'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'noindex_external_links_method';
  $strongarm->value = array(
    'nofollow' => 'nofollow',
    'noindex' => 0,
  );
  $export['noindex_external_links_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'noindex_external_links_noindex_format';
  $strongarm->value = 'valid';
  $export['noindex_external_links_noindex_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'noindex_external_links_subdomains_enabled';
  $strongarm->value = 0;
  $export['noindex_external_links_subdomains_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'noindex_external_links_top_domain_level';
  $strongarm->value = '2';
  $export['noindex_external_links_top_domain_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '900';
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_compression';
  $strongarm->value = 0;
  $export['page_compression'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_image_pattern';
  $strongarm->value = '';
  $export['pathauto_file_image_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 0;
  $export['preprocess_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 0;
  $export['preprocess_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_auto_redirect';
  $strongarm->value = 1;
  $export['redirect_auto_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_default_status_code';
  $strongarm->value = '301';
  $export['redirect_default_status_code'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_global_admin_paths';
  $strongarm->value = 0;
  $export['redirect_global_admin_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_global_canonical';
  $strongarm->value = 1;
  $export['redirect_global_canonical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_global_clean';
  $strongarm->value = 1;
  $export['redirect_global_clean'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_global_deslash';
  $strongarm->value = 0;
  $export['redirect_global_deslash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_global_home';
  $strongarm->value = 1;
  $export['redirect_global_home'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_page_cache';
  $strongarm->value = 1;
  $export['redirect_page_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_passthrough_querystring';
  $strongarm->value = 1;
  $export['redirect_passthrough_querystring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_purge_inactive';
  $strongarm->value = '0';
  $export['redirect_purge_inactive'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_warning';
  $strongarm->value = FALSE;
  $export['redirect_warning'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'earthquake_news';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_earthquake_news_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 0,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bootstrap__active_tab' => 'edit-general',
    'bootstrap_fluid_container' => 0,
    'bootstrap_button_size' => '',
    'bootstrap_button_colorize' => 1,
    'bootstrap_button_iconize' => 1,
    'bootstrap_forms_required_has_error' => 0,
    'bootstrap_forms_smart_descriptions' => 1,
    'bootstrap_forms_smart_descriptions_limit' => '250',
    'bootstrap_forms_smart_descriptions_allowed_tags' => 'b, code, em, i, kbd, span, strong',
    'bootstrap_image_shape' => '',
    'bootstrap_image_responsive' => 1,
    'bootstrap_table_bordered' => 0,
    'bootstrap_table_condensed' => 0,
    'bootstrap_table_hover' => 1,
    'bootstrap_table_striped' => 1,
    'bootstrap_table_responsive' => 1,
    'bootstrap_breadcrumb' => '1',
    'bootstrap_breadcrumb_home' => 0,
    'bootstrap_breadcrumb_title' => 0,
    'bootstrap_navbar_position' => '',
    'bootstrap_navbar_inverse' => 0,
    'bootstrap_pager_first_and_last' => 1,
    'bootstrap_region_well-navigation' => '',
    'bootstrap_region_well-header' => '',
    'bootstrap_region_well-highlighted' => '',
    'bootstrap_region_well-help' => '',
    'bootstrap_region_well-content' => '',
    'bootstrap_region_well-sidebar_first' => 'well',
    'bootstrap_region_well-sidebar_second' => '',
    'bootstrap_region_well-footer' => '',
    'bootstrap_region_well-page_top' => '',
    'bootstrap_region_well-page_bottom' => '',
    'bootstrap_anchors_fix' => '0',
    'bootstrap_anchors_smooth_scrolling' => '0',
    'bootstrap_forms_has_error_value_toggle' => 1,
    'bootstrap_popover_enabled' => 1,
    'bootstrap_popover_animation' => 1,
    'bootstrap_popover_html' => 0,
    'bootstrap_popover_placement' => 'right',
    'bootstrap_popover_selector' => '',
    'bootstrap_popover_trigger' => array(
      'click' => 'click',
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootstrap_popover_trigger_autoclose' => 1,
    'bootstrap_popover_title' => '',
    'bootstrap_popover_content' => '',
    'bootstrap_popover_delay' => '0',
    'bootstrap_popover_container' => 'body',
    'bootstrap_tooltip_enabled' => 1,
    'bootstrap_tooltip_animation' => 1,
    'bootstrap_tooltip_html' => 0,
    'bootstrap_tooltip_placement' => 'auto left',
    'bootstrap_tooltip_selector' => '',
    'bootstrap_tooltip_trigger' => array(
      'hover' => 'hover',
      'focus' => 'focus',
      'click' => 0,
      'manual' => 0,
    ),
    'bootstrap_tooltip_delay' => '0',
    'bootstrap_tooltip_container' => 'body',
    'bootstrap_toggle_jquery_error' => 0,
    'bootstrap_cdn_provider' => '',
    'bootstrap_cdn_custom_css' => 'https://cdn.jsdelivr.net/bootstrap/3.3.5/css/bootstrap.css',
    'bootstrap_cdn_custom_css_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.5/css/bootstrap.min.css',
    'bootstrap_cdn_custom_js' => 'https://cdn.jsdelivr.net/bootstrap/3.3.5/js/bootstrap.js',
    'bootstrap_cdn_custom_js_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.5/js/bootstrap.min.js',
    'bootstrap_cdn_jsdelivr_version' => '3.3.5',
    'bootstrap_cdn_jsdelivr_theme' => 'bootstrap',
    'nice_menus_custom_css' => '',
  );
  $export['theme_earthquake_news_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_gdg_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 0,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );
  $export['theme_gdg_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 0,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'nice_menus_custom_css' => '',
  );
  $export['theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_cancel_method';
  $strongarm->value = 'user_cancel_block';
  $export['user_cancel_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = TRUE;
  $export['user_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 1;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = '';
  $export['user_picture_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '85x85';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '30';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_guidelines';
  $strongarm->value = '';
  $export['user_picture_guidelines'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_path';
  $strongarm->value = 'pictures';
  $export['user_picture_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = '';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '0';
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_signatures';
  $strongarm->value = 0;
  $export['user_signatures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_batch_limit';
  $strongarm->value = '100';
  $export['xmlsitemap_batch_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_chunk_size';
  $strongarm->value = 'auto';
  $export['xmlsitemap_chunk_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_disable_cron_regeneration';
  $strongarm->value = 0;
  $export['xmlsitemap_disable_cron_regeneration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_frontpage_changefreq';
  $strongarm->value = '60';
  $export['xmlsitemap_frontpage_changefreq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_frontpage_priority';
  $strongarm->value = '1.0';
  $export['xmlsitemap_frontpage_priority'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_lastmod_format';
  $strongarm->value = 'Y-m-d\\TH:i\\Z';
  $export['xmlsitemap_lastmod_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_minimum_lifetime';
  $strongarm->value = '900';
  $export['xmlsitemap_minimum_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_output_elements';
  $strongarm->value = array(
    0 => 'lastmod',
    1 => 'changefreq',
    2 => 'priority',
  );
  $export['xmlsitemap_output_elements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_path';
  $strongarm->value = 'xmlsitemap';
  $export['xmlsitemap_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_prefetch_aliases';
  $strongarm->value = 1;
  $export['xmlsitemap_prefetch_aliases'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_regenerate_needed';
  $strongarm->value = TRUE;
  $export['xmlsitemap_regenerate_needed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_menu_link_main-menu';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.9',
  );
  $export['xmlsitemap_settings_menu_link_main-menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_xsl';
  $strongarm->value = 1;
  $export['xmlsitemap_xsl'] = $strongarm;

  return $export;
}
