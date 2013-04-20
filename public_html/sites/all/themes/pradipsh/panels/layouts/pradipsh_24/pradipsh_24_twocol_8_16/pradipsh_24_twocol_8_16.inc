<?php

/**
 * Implements hook_panels_layouts().
 */
function pradipsh_pradipsh_24_twocol_8_16_panels_layouts() {
  $items['pradipsh_24_twocol_8_16'] = array(
    'title' => t('Two Column 8-16'),
    'category' => t('pradipsh: 24 Column Grid'),
    'icon' => 'pradipsh_24_twocol_8_16.png',
    'theme' => 'pradipsh_24_twocol_8_16',
    'admin css' => '../pradipsh_panels_admin_24.css',
    'regions' => array(
      'left' => t('Left side'),
      'right' => t('Right side')
    ),
  );

  return $items;
}
