(function ($) {
  /**
   * Check for caption wrapper around image and text,
   * if it exist, set image width for wrapper element.
   */
  Drupal.behaviors.caption_wrapper_width = {
    attach: function (context, settings) {
      $('div.caption-left img, div.caption-right img').each(function() {
        $(this).parent().width($(this).width());
        var title = $(this).attr('title');
        $(this).after('<div class="caption-text">' + title + '</div>');
      });
    }
  }
}(jQuery));
