(function ($) {
  /**
   * Check for caption wrapper around image and text,
   * if it exist, set image width for wrapper element.
   */
  Drupal.behaviors.caption_wrapper_width = {
    attach: function (context, settings) {
      $('div.caption-center img, div.caption-left img, div.caption-right img').each(function() {
        $(this).parent().css('width',$(this).attr('width'));
      });
    }
  }
}(jQuery));
