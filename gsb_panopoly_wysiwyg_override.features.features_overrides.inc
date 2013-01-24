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
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Anchor"] = 1;
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
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|drupal"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|fullscreen"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|linkit"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|paste"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|pdw"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|spellchecker"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|paste_auto_cleanup_on_paste"] = 0;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|show_toggle"] = 1;

 return $overrides;
}
