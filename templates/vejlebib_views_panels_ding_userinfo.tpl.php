<?php
/**
 * @file
 * Template to render vejlebib user info block.
 *
 * @variables:
 * $name: display name of the logged in user
 *
 * $pickup: array
 * $reservation: array
 * $debt: array
 * $loan: array
 * $bookmark: array
 *
 * each of the above 5 arrays contain: class, label, count, link
 */
$notice_pickup = ($pickup['count'] > 0 ? ' notice-pickup' : '');
$notice_debt = ($debt['count'] > 0 ? ' notice-debt' : '');
?>
<div class="user vejlebib-user-info">
  <div class="username"><?php print l($name, 'user'); ?></div>
  <ul>
    <li><?php print l($loan['label'] . ' (' . $loan['count'] . ')', $loan['link'], array('attributes' => array('class' => array('button' . $notice_debt)))); ?></li>
    <li><?php print l(t('logout'), 'user/logout', array('attributes' => array('class' => array('button')))); ?></li>
    <li><?php print l($reservation['label'] . ' (' . $reservation['count'] . ')', $reservation['link'], array('attributes' => array('class' => array('button' . $notice_pickup)))); ?></li>
    <li><?php print l($bookmark['label'] . ' (' . $bookmark['count'] . ')', $bookmark['link'], array('attributes' => array('class' => array('button')))); ?></li>
  </ul>
</div>