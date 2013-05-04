/* 
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
(function($) {
    Drupal.behaviors.pradipsh = {
        attach: function(context) {
            $('.cbox-element').colorbox({
                maxWidth: "800px",
                maxHeight: "600px",
                opacity: 0.7
            });
        }
    };
})(jQuery);
