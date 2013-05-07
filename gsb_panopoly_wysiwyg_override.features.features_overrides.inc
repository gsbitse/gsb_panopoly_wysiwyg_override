<?php
/**
 * @file
 * gsb_panopoly_wysiwyg_override.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function gsb_panopoly_wysiwyg_override_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: filter
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|rule_valid_classes|22"] = 'acc-title';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|rule_valid_classes|24"] = 'acc-body';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|valid_elements"] = 'a[!href|target<_blank|title|style],
  div[style|class|align<center?justify?left?right],
  p,br,em,i,strong,u,cite,blockquote,hr,ul,ol,li,dl,dt,dd,
  table,tbody,thead,th,tr,td,
  span[style],p[style|class],
  h1,h2,h3,h4,h5,h6,
  object,iframe,area,embed,
  address,abbr,caption,pre,code,script,
  img[!src|title|alt|style|width|height|class|hspace|vspace],
  @[style]';

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.panopoly_wysiwyg_text.editor"] = 'ckeditor';
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|block_formats"] = 'p,address,pre,h2,h3,h4,h5,h6,div';
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|captionfilter"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Blockquote"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Bold"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|BulletedList"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Copy"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Cut"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|HorizontalRule"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Image"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Italic"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|JustifyCenter"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|JustifyLeft"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|JustifyRight"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Link"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|NumberedList"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|PasteFromWord"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|PasteText"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Redo"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Scayt"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|SelectAll"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Source"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|SpellChecker"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Styles"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Superscript"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Table"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Undo"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Unlink"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|blockquote"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|bold"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|bullist"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|charmap"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|forecolor"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|formatselect"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|indent"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|italic"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|justifycenter"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|justifyfull"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|justifyleft"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|justifyright"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|numlist"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|outdent"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|redo"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|removeformat"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|strikethrough"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|underline"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|undo"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|unlink"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|drupal|accordion"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|drupal|accordion_header"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|fullscreen"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|linkit"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|paste"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|pdw"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|spellchecker"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|css_classes"] = 'Heading H2=h2
  Heading H3=h3
  Heading H4=h4
  Heading H5=h5
  Heading H6=h6
  Accordion Header=p.acc-title
  Accordion Body=p.acc-body
  Caption Left=div.caption-left
  Caption Right=div.caption-right
  Caption Center=div.caption-center';
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|paste_auto_cleanup_on_paste"] = 0;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|show_toggle"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|theme"] = 'kama';

 return $overrides;
}
