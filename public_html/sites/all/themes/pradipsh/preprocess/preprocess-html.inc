<?php

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

function pradipsh_alpha_preprocess_html(&$vars) {
    $path = libraries_get_path('colorbox');
    drupal_add_css($path . '/example1/colorbox.css');
    drupal_add_js($path . '/jquery.colorbox.js');
}

