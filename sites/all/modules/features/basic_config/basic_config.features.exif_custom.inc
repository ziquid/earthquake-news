<?php
/**
 * @file
 * basic_config.features.exif_custom.inc
 */

/**
 * Implements hook_exif_custom_export_maps().
 */
function basic_config_exif_custom_export_maps() {
  $items = array(
    'Bigstock mapping' => array(
      'name' => 'Bigstock mapping',
      'fields' => array(
        0 => array(
          'exif_field' => 'EXIF:FILE:FileName',
          'exif_example' => 'bigstock-Man-And-Woman-Loving-Each-Othe-76174925.jpg',
          'img_field' => 'none',
        ),
        1 => array(
          'exif_field' => 'EXIF:FILE:FileDateTime',
          'exif_example' => 1433963437,
          'img_field' => 'none',
        ),
        2 => array(
          'exif_field' => 'EXIF:FILE:FileSize',
          'exif_example' => 1021194,
          'img_field' => 'none',
        ),
        3 => array(
          'exif_field' => 'EXIF:FILE:FileType',
          'exif_example' => 2,
          'img_field' => 'none',
        ),
        4 => array(
          'exif_field' => 'EXIF:FILE:MimeType',
          'exif_example' => 'image/jpeg',
          'img_field' => 'none',
        ),
        5 => array(
          'exif_field' => 'EXIF:FILE:SectionsFound',
          'exif_example' => 'ANY_TAG, IFD0, COMMENT',
          'img_field' => 'none',
        ),
        6 => array(
          'exif_field' => 'EXIF:COMPUTED:html',
          'exif_example' => 'width="1600" height="1067"',
          'img_field' => 'none',
        ),
        7 => array(
          'exif_field' => 'EXIF:COMPUTED:Height',
          'exif_example' => 1067,
          'img_field' => 'none',
        ),
        8 => array(
          'exif_field' => 'EXIF:COMPUTED:Width',
          'exif_example' => 1600,
          'img_field' => 'none',
        ),
        9 => array(
          'exif_field' => 'EXIF:COMPUTED:IsColor',
          'exif_example' => 1,
          'img_field' => 'none',
        ),
        10 => array(
          'exif_field' => 'EXIF:COMPUTED:ByteOrderMotorola',
          'exif_example' => 1,
          'img_field' => 'none',
        ),
        11 => array(
          'exif_field' => 'EXIF:COMPUTED:Copyright',
          'exif_example' => 'Bigstock',
          'img_field' => 'field_file_image_credit_text',
        ),
        12 => array(
          'exif_field' => 'EXIF:IFD0:ImageDescription',
          'exif_example' => 'love understanding are what this couple shows off while lying on their living room sofa embracing and enjoying
** Note: Shallow depth of field',
          'img_field' => 'field_file_image_caption_text',
        ),
        13 => array(
          'exif_field' => 'EXIF:IFD0:Make',
          'exif_example' => 'Canon',
          'img_field' => 'none',
        ),
        14 => array(
          'exif_field' => 'EXIF:IFD0:Model',
          'exif_example' => 'Canon EOS-1Ds Mark III',
          'img_field' => 'none',
        ),
        15 => array(
          'exif_field' => 'EXIF:IFD0:XResolution',
          'exif_example' => '300/1',
          'img_field' => 'none',
        ),
        16 => array(
          'exif_field' => 'EXIF:IFD0:YResolution',
          'exif_example' => '300/1',
          'img_field' => 'none',
        ),
        17 => array(
          'exif_field' => 'EXIF:IFD0:ResolutionUnit',
          'exif_example' => 2,
          'img_field' => 'none',
        ),
        18 => array(
          'exif_field' => 'EXIF:IFD0:YCbCrPositioning',
          'exif_example' => 1,
          'img_field' => 'none',
        ),
        19 => array(
          'exif_field' => 'EXIF:IFD0:Copyright',
          'exif_example' => 'Bigstock',
          'img_field' => 'none',
        ),
        20 => array(
          'exif_field' => 'EXIF:COMMENT:0',
          'exif_example' => 'ID:76174925',
          'img_field' => 'none',
        ),
        21 => array(
          'exif_field' => 'XMP:xmpmeta:rdf:description:title:alt:li',
          'exif_example' => 'Man And Woman Loving Each Other',
          'img_field' => 'field_file_image_title_text',
        ),
        22 => array(
          'exif_field' => 'IPTC:1#027',
          'exif_example' => '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '',
          'img_field' => 'none',
        ),
        23 => array(
          'exif_field' => 'IPTC:2#005',
          'exif_example' => 'Man And Woman Loving Each Other',
          'img_field' => 'field_file_image_alt_text',
        ),
        24 => array(
          'exif_field' => 'IPTC:2#025',
          'exif_example' => 'adult, affection, arousal, beauty, body, boyfriend, brightly, casual, colorful, comfortable, communication, concept, confidence, couch, couple, cuddles, desire, device, enjoy, freshness, fun, future, happiness, having, home, indoors, inspiration, intelligence, kiss, leisure, lifestyle, lit, living, love, lying, man, mobile, multimedia, music, natural, people, playtime, positive, protection, real, relax, relaxation, romance, room, safety, serene, sex, snuggles, sofa, technology, tenderness, time, together, togetherness, trust, woman, young',
          'img_field' => 'none',
        ),
        25 => array(
          'exif_field' => 'IPTC:2#000',
          'exif_example' => '' . "\0" . '',
          'img_field' => 'none',
        ),
      ),
    ),
  );
  return $items;
}
