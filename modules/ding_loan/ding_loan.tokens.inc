<?php

/**
 * @file
 * Defines tokens for showing loan data for the current user.
 */

function ding_loan_token_info() {
  $user['loan-count'] = array(
    'name' => t('User loan count'),
    'description' => t('Number of loans for the supplied user.')
  );

  return array(
    'tokens' => array('user' => $user),
  );
}
