<?php
/**
 * @file
 * Theme implementation to display the field_pg_content_buttons field.
 */
?>
<div class="u-spacing-top-l">
  <?php foreach ($items as $delta => $item): ?>
    <?php print render($item); ?>
  <?php endforeach; ?>
</div>
