<?php

/**
 * @file 
 *
 * Defines Vejlebib's bibliotek.dk link ctools plugin.
 */

$plugin = array(
	'title' => t('Vejlebib - Bibliotek dk link'),
	'description' => t('Shows a link to bibliotek.dk on a search page with the current search'),
	'single' => TRUE,
	'content_types' => array('bibliotek_dk_link'),
	'required context' => new ctools_context_required(t('Keywords'), 'string'),
	'category' => t('Ting'),
	'render callback' => 'vejlebib_views_panels_bibliotek_dk_link_render',
	'edit form' => 'vejlebib_views_panels_bibliotek_dk_link_edit_form',
);

/**
 * Renders the bibliotek_dk_link plugin.
 */
function vejlebib_views_panels_bibliotek_dk_link_render($subtype, $conf, $args, $context) {
	$block = new stdClass();
	if (!empty($context) && isset($context->data)) {
		$search_result = drupal_static('ting_search_results');
		// We dont show anything if there's zero results.
		if (isset($search_result) && $search_result->numTotalObjects) {
			// Get the search-string from the context object
			$query = $context->data;
			$block->content['lead'] = array(
				'#theme' => 'html_tag',
				'#tag' => 'strong',
				'#value' => t('Did you not find what you where looking for?'),
			);
			$block->content['link'] = array(
				'#theme' => 'html_tag',
				'#tag' => 'p',
				'#value' => t('Try to search for !phrase on biblotek.dk', array(
					'!phrase' => l($query, 'http://bibliotek.dk/search/work/' . $query, array(
						'attributes' => array(
							'target' => '_blank',
						),
					)),
				)),
			);
			$block->content['image_link'] = array(
				'prefix' => array(
					'#markup' => '<a href="http://bibliotek.dk">'
				),
				'image' => array(
					'#theme' => 'image',
					'#path' => drupal_get_path('module', 'vejlebib_views_panels') . '/images/bibliotek_dk.png',
					'#title' => 'Bibliotek.dk logo',
					'#alt' => 'Bibliotek.dk logo',
					'#width' => 260,
					'#height' => 80,
				),
				'suffix' => array(
					'#markup' => '</a>',
				),
			);
		}
	}
	return $block;
}

/**
 * Enable admin settings form.
 */
function vejlebib_views_panels_bibliotek_dk_link_edit_form($form, &$form_state) {
	return $form;
}
