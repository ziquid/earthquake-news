<?php
/**
 * @file
 * basic_config.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function basic_config_filter_default_formats() {
  $formats = array();

  // Exported format: Deck HTML.
  $formats['deck_html'] = array(
    'format' => 'deck_html',
    'name' => 'Deck HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<em> <strong>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'typogrify' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'smartypants_enabled' => 1,
          'smartypants_hyphens' => 1,
          'space_hyphens' => 0,
          'wrap_ampersand' => 1,
          'widont_enabled' => 1,
          'space_to_nbsp' => 1,
          'hyphenate_shy' => 0,
          'wrap_abbr' => 0,
          'wrap_caps' => 1,
          'wrap_initial_quotes' => 1,
          'wrap_numbers' => 0,
          'ligatures' => array(
            'ffi' => 'ffi',
            'ffl' => 'ffl',
            'ff' => 'ff',
            'fi' => 'fi',
            'fl' => 'fl',
            'ij' => 'ij',
            'IJ' => 'IJ',
            'st' => 0,
            'ss' => 0,
          ),
          'arrows' => array(
            '-&gt;&gt;' => '-&gt;&gt;',
            '&lt;&lt;-' => '&lt;&lt;-',
            '-&gt;|' => '-&gt;|',
            '|&lt;-' => '|&lt;-',
            '&lt;-&gt;' => '&lt;-&gt;',
            '-&gt;' => '-&gt;',
            '&lt;-' => '&lt;-',
            '&lt;=&gt;' => '&lt;=&gt;',
            '=&gt;' => '=&gt;',
            '&lt;=' => '&lt;=',
          ),
          'fractions' => array(
            '1/4' => '1/4',
            '1/2' => '1/2',
            '3/4' => '3/4',
            '1/3' => '1/3',
            '2/3' => '2/3',
            '1/5' => '1/5',
            '2/5' => '2/5',
            '3/5' => '3/5',
            '4/5' => '4/5',
            '1/6' => '1/6',
            '5/6' => '5/6',
            '1/8' => '1/8',
            '3/8' => '3/8',
            '5/8' => '5/8',
            '7/8' => '7/8',
          ),
          'quotes' => array(
            ',,' => ',,',
            '\'\'' => '\'\'',
            '&lt;&lt;' => '&lt;&lt;',
            '&gt;&gt;' => '&gt;&gt;',
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

  // Exported format: Display Suite code.
  $formats['ds_code'] = array(
    'format' => 'ds_code',
    'name' => 'Display Suite code',
    'cache' => 1,
    'status' => 1,
    'weight' => 12,
    'filters' => array(),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'external_links' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'twitter_links' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
      'twitter_username' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
      'lightbox_slideshow_filter' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(),
      ),
      'lightbox_modal_filter' => array(
        'weight' => -39,
        'status' => 1,
        'settings' => array(),
      ),
      'lightbox_iframe_filter' => array(
        'weight' => -33,
        'status' => 1,
        'settings' => array(),
      ),
      'lightbox2_gd_filter' => array(
        'weight' => -32,
        'status' => 1,
        'settings' => array(),
      ),
      'lightbox2_filter' => array(
        'weight' => -31,
        'status' => 1,
        'settings' => array(),
      ),
      'typogrify' => array(
        'weight' => -30,
        'status' => 1,
        'settings' => array(
          'smartypants_enabled' => 1,
          'smartypants_hyphens' => 2,
          'space_hyphens' => 0,
          'wrap_ampersand' => 1,
          'widont_enabled' => 1,
          'space_to_nbsp' => 1,
          'hyphenate_shy' => 0,
          'wrap_abbr' => 0,
          'wrap_caps' => 1,
          'wrap_initial_quotes' => 1,
          'wrap_numbers' => 0,
          'ligatures' => array(
            'ffi' => 'ffi',
            'ffl' => 'ffl',
            'ff' => 'ff',
            'fi' => 'fi',
            'fl' => 'fl',
            'ij' => 'ij',
            'IJ' => 'IJ',
            'st' => 0,
            'ss' => 0,
          ),
          'arrows' => array(
            '-&gt;&gt;' => '-&gt;&gt;',
            '&lt;&lt;-' => '&lt;&lt;-',
            '-&gt;|' => '-&gt;|',
            '|&lt;-' => '|&lt;-',
            '&lt;-&gt;' => '&lt;-&gt;',
            '-&gt;' => '-&gt;',
            '&lt;-' => '&lt;-',
            '&lt;=&gt;' => '&lt;=&gt;',
            '=&gt;' => '=&gt;',
            '&lt;=' => '&lt;=',
          ),
          'fractions' => array(
            '1/4' => '1/4',
            '1/2' => '1/2',
            '3/4' => '3/4',
            '1/3' => '1/3',
            '2/3' => '2/3',
            '1/5' => '1/5',
            '2/5' => '2/5',
            '3/5' => '3/5',
            '4/5' => '4/5',
            '1/6' => '1/6',
            '5/6' => '5/6',
            '1/8' => '1/8',
            '3/8' => '3/8',
            '5/8' => '5/8',
            '7/8' => '7/8',
          ),
          'quotes' => array(
            ',,' => ',,',
            '\'\'' => '\'\'',
            '&lt;&lt;' => '&lt;&lt;',
            '&gt;&gt;' => '&gt;&gt;',
          ),
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -28,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Limited HTML.
  $formats['limited_html'] = array(
    'format' => 'limited_html',
    'name' => 'Limited HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <br> <big> <h2>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 1,
        ),
      ),
      'filter_autop' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'lightbox_video_filter' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'twitter_hashtag' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'video_embed_field' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'twitter_links' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
      'twitter_username' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
      'lightbox_slideshow_filter' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(),
      ),
      'lightbox_modal_filter' => array(
        'weight' => -39,
        'status' => 1,
        'settings' => array(),
      ),
      'lightbox_iframe_filter' => array(
        'weight' => -34,
        'status' => 1,
        'settings' => array(),
      ),
      'lightbox2_gd_filter' => array(
        'weight' => -33,
        'status' => 1,
        'settings' => array(),
      ),
      'lightbox2_filter' => array(
        'weight' => -32,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -31,
        'status' => 1,
        'settings' => array(),
      ),
      'external_links' => array(
        'weight' => -30,
        'status' => 1,
        'settings' => array(),
      ),
      'typogrify' => array(
        'weight' => -29,
        'status' => 1,
        'settings' => array(
          'smartypants_enabled' => 1,
          'smartypants_hyphens' => 1,
          'space_hyphens' => 1,
          'wrap_ampersand' => 1,
          'widont_enabled' => 1,
          'space_to_nbsp' => 1,
          'hyphenate_shy' => 0,
          'wrap_abbr' => 0,
          'wrap_caps' => 1,
          'wrap_initial_quotes' => 1,
          'wrap_numbers' => 0,
          'ligatures' => array(
            'ffi' => 0,
            'ffl' => 0,
            'ff' => 0,
            'fi' => 0,
            'fl' => 0,
            'ij' => 0,
            'IJ' => 0,
            'st' => 0,
            'ss' => 0,
          ),
          'arrows' => array(
            '-&gt;&gt;' => '-&gt;&gt;',
            '&lt;&lt;-' => '&lt;&lt;-',
            '-&gt;|' => '-&gt;|',
            '|&lt;-' => '|&lt;-',
            '&lt;-&gt;' => '&lt;-&gt;',
            '-&gt;' => '-&gt;',
            '&lt;-' => '&lt;-',
            '&lt;=&gt;' => '&lt;=&gt;',
            '=&gt;' => '=&gt;',
            '&lt;=' => '&lt;=',
          ),
          'fractions' => array(
            '1/4' => '1/4',
            '1/2' => '1/2',
            '3/4' => '3/4',
            '1/3' => '1/3',
            '2/3' => '2/3',
            '1/5' => '1/5',
            '2/5' => '2/5',
            '3/5' => '3/5',
            '4/5' => '4/5',
            '1/6' => '1/6',
            '5/6' => '5/6',
            '1/8' => '1/8',
            '3/8' => '3/8',
            '5/8' => '5/8',
            '7/8' => '7/8',
          ),
          'quotes' => array(
            ',,' => ',,',
            '\'\'' => '\'\'',
            '&lt;&lt;' => '&lt;&lt;',
            '&gt;&gt;' => '&gt;&gt;',
          ),
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -28,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: PHP code.
  $formats['php_code'] = array(
    'format' => 'php_code',
    'name' => 'PHP code',
    'cache' => 0,
    'status' => 1,
    'weight' => 11,
    'filters' => array(
      'php_code' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'typogrify' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'smartypants_enabled' => 1,
          'smartypants_hyphens' => 3,
          'space_hyphens' => 0,
          'wrap_ampersand' => 1,
          'widont_enabled' => 1,
          'space_to_nbsp' => 1,
          'hyphenate_shy' => 0,
          'wrap_abbr' => 0,
          'wrap_caps' => 1,
          'wrap_initial_quotes' => 1,
          'wrap_numbers' => 0,
          'ligatures' => array(
            'ffi' => 'ffi',
            'ffl' => 'ffl',
            'ff' => 'ff',
            'fi' => 'fi',
            'fl' => 'fl',
            'ij' => 'ij',
            'IJ' => 'IJ',
            'st' => 0,
            'ss' => 0,
          ),
          'arrows' => array(
            '-&gt;&gt;' => '-&gt;&gt;',
            '&lt;&lt;-' => '&lt;&lt;-',
            '-&gt;|' => '-&gt;|',
            '|&lt;-' => '|&lt;-',
            '&lt;-&gt;' => '&lt;-&gt;',
            '-&gt;' => '-&gt;',
            '&lt;-' => '&lt;-',
            '&lt;=&gt;' => '&lt;=&gt;',
            '=&gt;' => '=&gt;',
            '&lt;=' => '&lt;=',
          ),
          'fractions' => array(
            '1/4' => '1/4',
            '1/2' => '1/2',
            '3/4' => '3/4',
            '1/3' => '1/3',
            '2/3' => '2/3',
            '1/5' => '1/5',
            '2/5' => '2/5',
            '3/5' => '3/5',
            '4/5' => '4/5',
            '1/6' => '1/6',
            '5/6' => '5/6',
            '1/8' => '1/8',
            '3/8' => '3/8',
            '5/8' => '5/8',
            '7/8' => '7/8',
          ),
          'quotes' => array(
            ',,' => ',,',
            '\'\'' => '\'\'',
            '&lt;&lt;' => '&lt;&lt;',
            '&gt;&gt;' => '&gt;&gt;',
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
    'weight' => 10,
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
