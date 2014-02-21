<?php
/**
 * @file
 * vejlebib_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vejlebib_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cards_supported';
  $strongarm->value = array(
    'Dankort' => 'Dankort',
    'eDankort' => 'eDankort',
    'VISA' => 'VISA',
    'VISA Electron' => 0,
    'Mastercard' => 0,
    'JCB' => 0,
    'Diners Club' => 0,
    'American Express' => 0,
    'Maestro' => 0,
    'Forbrugforeningen' => 0,
    'Danske Netbetaling' => 0,
    'Nordea Sol-E' => 0,
    'SEB' => 0,
    'SHB direktbetaling' => 0,
    'Swedbank direktbetaling' => 0,
    'PayPal' => 0,
    'Bank Einzug' => 0,
    'iDEAL' => 0,
    'Aktia' => 0,
    'OKO' => 0,
    'Sampo' => 0,
    'BankAxess' => 0,
    'Getitcard' => 0,
  );
  $export['cards_supported'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_place2book_category_mappings';
  $strongarm->value = array(
    6 => 'Andet',
    7 => 'Andet',
    8 => 'Undervisning',
    9 => 'Blandet/Ukendt',
  );
  $export['ding_place2book_category_mappings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_place2book_target_mappings';
  $strongarm->value = array(
    10 => 'Børn',
    11 => 'Børn',
    13 => 'Børn',
    12 => 'Voksne',
  );
  $export['ding_place2book_target_mappings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_wagnerguide_transformation_array_Bor';
  $strongarm->value = '{}';
  $export['ding_wagnerguide_transformation_array_Bor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_wagnerguide_transformation_array_Egt';
  $strongarm->value = '{}';
  $export['ding_wagnerguide_transformation_array_Egt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_wagnerguide_transformation_array_Giv';
  $strongarm->value = '{}';
  $export['ding_wagnerguide_transformation_array_Giv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_wagnerguide_transformation_array_Jel';
  $strongarm->value = '{}';
  $export['ding_wagnerguide_transformation_array_Jel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_wagnerguide_transformation_array_Vej';
  $strongarm->value = '{
    "department_id":{},
    "location_id":{
      "bus":{
        "popup":"Materialet er i BUSSEN - og kan findes frem til dig næste gang bussen er hjemme. Spørg personalet"
      },
      "dagpleje":{},
      "depot":{
        "popup":"Materialet er i DEPOT - du kan få personalet på Vejle Bibliotek til at hente det til dig"
      },
      "kontor":{},
      "magasin":{
        "ignore_mtype":"cdrom,dvd,data",
        "popup":"Materialet er i MAGASIN - du kan få personalet på Vejle Bibliotek til at hente det til dig"
      },
      "magasin1":{
        "ignore_mtype":"cd,data,videoGame",
        "popup":"Materialet er i MAGASIN - du kan få personalet på Vejle Bibliotek til at hente det til dig"
      },
      "magasin2":{
        "ignore_mtype":"cdrom,dvd,data",
        "popup":"Materialet er i MAGASIN - du kan få personalet på Vejle Bibliotek til at hente det til dig"
      },
      "magasin3":{
        "popup":"Materialet er i MAGASIN - du kan få personalet på Vejle Bibliotek til at hente det til dig"
      }
    },
    "sublocation_id":{}
  }';
  $export['ding_wagnerguide_transformation_array_Vej'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_zerohit_form';
  $strongarm->value = array(
    'installed_webform_id' => '5663',
    'webform_id' => '5663',
  );
  $export['ding_zerohit_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = 'sites/default/files/temp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ignore_words';
  $strongarm->value = 'og,i,jeg,det,at,en,den,til,er,som,paa,de,med,han,af,for,ikke,der,var,mig,sig,men,et,har,om,vi,min,havde,ham,hun,nu,over,da,fra,ud,sin,dem,os,op,man,hans,hvor,eller,hvad,skal,selv,her,alle,vil,blev,kunne,ind,naar,vaere,dog,noget,ville,jo,deres,efter,ned,skulle,denne,end,dette,mit,ogsaa,under,have,dig,anden,hende,mine,alt,meget,sit,sine,vor,mod,disse,hvis,din,nogle,hos,blive,mange,ad,bliver,hendes,vaeret,thi,jer';
  $export['pathauto_ignore_words'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_ding_rolltab';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_ding_rolltab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_ding_rolltab';
  $strongarm->value = 0;
  $export['scheduler_publish_required_ding_rolltab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_ding_rolltab';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_ding_rolltab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_ding_rolltab';
  $strongarm->value = 1;
  $export['scheduler_publish_touch_ding_rolltab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_ding_rolltab';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_ding_rolltab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_ding_rolltab';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_ding_rolltab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_ding_rolltab';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_ding_rolltab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    'node' => 'node',
    'ting_extrasearch' => 'ting_extrasearch',
    'ting_search' => 'ting_search',
    'file_entity' => 0,
    'user' => 0,
  );
  $export['search_active_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'terms_of_sale_da';
  $strongarm->value = 'Gebyrer bliver betalt til: Vejle Bibliotekerne, Willy Sørensens Plads 1, 7100 Vejle. E-mail: vejlebib@vejlebib.dk, CVR nr: 29189900.
Når beløbet er indbetalt, er det ikke muligt at annullere overførslen.';
  $export['terms_of_sale_da'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'terms_of_sale_en';
  $strongarm->value = 'The debt is paid in full to: Vejle Bibliotekerne, Willy Sørensens Plads 1, 7100 Vejle. E-mail: vejlebib@vejlebib.dk, CVR no: 29189900.
Once the fee is paid, it is not possible to cancel the payment.
';
  $export['terms_of_sale_en'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_wellejus_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'ddbasic_classes_menu_leaf' => 0,
    'ddbasic_classes_menu_has_children' => 0,
    'ddbasic_classes_menu_items_mlid' => 0,
    'main_menu_sticky' => 0,
    'load_equalize' => 0,
    'default_iosicon' => 1,
    'iosicon_path' => '',
    'iosicon_upload' => '',
  );
  $export['theme_wellejus_settings'] = $strongarm;

  return $export;
}
