<?php print $doctype; ?>
<!--[if IE 7]> <html lang="<?php print $language->language; ?>" class="ie ie7 lte9 lte8 lte7" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>> <![endif]-->
<!--[if IE 8]> <html lang="<?php print $language->language; ?>" class="ie ie8 lte9 lte8" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>> <![endif]-->
<!--[if IE 9]> <html lang="<?php print $language->language; ?>" class="ie ie9 lte9" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>> <![endif]-->
<!--[if gt IE 9]> <html lang="<?php print $language->language; ?>" class="ie html5" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>> <![endif]-->
<!--[if !IE]> --> <html lang="<?php print $language->language; ?>" class="html5" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>> <!-- <![endif]-->
    <html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
        <head<?php print $rdf->profile; ?>>
            <?php print $head; ?>
            <meta http-equiv="X-UA-Compatible" content="IE=8;Chrome=1;FF=3;OtherUA=4" />
            <title><?php print $head_title; ?></title>  
            <?php print $styles; ?>
            <?php print $scripts; ?>
            <!--[if lt IE 9]><script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
            <!--[if lte IE 8]>
            <link rel="stylesheet" type="text/css" href="/sites/all/themes/nibib/css/pradipsh-pradipsh-default.css" />
            <link rel="stylesheet" type="text/css" href="/sites/all/themes/nibib/css/pradipsh-pradipsh-default-narrow.css" />
            <link rel="stylesheet" type="text/css" href="/sites/all/themes/nibib/css/pradipsh-pradipsh-default-normal.css" />
            <![endif]-->
            <!--[if IE]>
            <link rel="stylesheet" type="text/css" href="/sites/all/themes/nibib/css/ie.css" />
            <![endif]-->
        </head>
        <body<?php print $attributes; ?>>
            <div id="skip-link">
                <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
            </div>
            <?php print $page_top; ?>
            <?php print $page; ?>
            <?php print $page_bottom; ?>
        </body>
    </html>