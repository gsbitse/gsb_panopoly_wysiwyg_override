<?php
/**
 * @file
 * gsb_panopoly_wysiwyg_override.features.inc
 */

/**
 * Implements hook_filter_default_formats_alter().
 */
function gsb_panopoly_wysiwyg_override_filter_default_formats_alter(&$data) {
  if (isset($data['panopoly_wysiwyg_text'])) {
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['valid_elements'] = 'a[!href|target<_blank|title|style],
    div[style|class|align<center?justify?left?right],
    p,br,em,i,strong,u,cite,blockquote,hr,ul,ol,li,dl,dt,dd,
    table,tbody,thead,th,tr,td,
    span[style],p[style|class],
    h1,h2,h3,h4,h5,h6,
    object,iframe,area,embed,
    address,abbr,caption,pre,code,script,
    img[!src|title|alt|style|width|height|class|hspace|vspace],
    @[style]'; /* WAS: 'a[!href|target<_blank|title|style],

    div[style|class|align<center?justify?left?right],

    br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,

    span[style],p[style|class],

    h1,h2,h3,h4,h5,h6,

    img[!src|title|alt|style|width|height|class|hspace|vspace],

    @[style]' */
  }
}

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function gsb_panopoly_wysiwyg_override_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['panopoly_wysiwyg_text'])) {
    $data['panopoly_wysiwyg_text']['editor'] = 'ckeditor'; /* WAS: 'tinymce' */
    $data['panopoly_wysiwyg_text']['settings']['block_formats'] = 'p,address,pre,h2,h3,h4,h5,h6,div'; /* WAS: 'h1,h2,h3,h4,h5,h6' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Anchor'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['paste_auto_cleanup_on_paste'] = 0; /* WAS: 1 */
    $data['panopoly_wysiwyg_text']['settings']['show_toggle'] = 1; /* WAS: 0 */
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['captionfilter']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['blockquote']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['bold']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['bullist']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['charmap']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['forecolor']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['formatselect']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['indent']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['italic']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['justifycenter']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['justifyfull']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['justifyleft']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['justifyright']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['numlist']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['outdent']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['redo']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['removeformat']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['strikethrough']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['underline']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['undo']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['unlink']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['drupal']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['fullscreen']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['linkit']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['paste']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['pdw']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['spellchecker']);
  }
}
