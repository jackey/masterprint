<?php if ($primary): ?>
<ul id="primary-tab" class="tabs primary">
	<?php print drupal_render($primary)?>
</ul>
<?php endif; ?>
<div id="welcome-message">
	<div class="inner">
        <div class="left">您好！MasterPrint 华方印务欢迎您的访问！</div>
        <div class="right">Everything we do, we do it for you.</div>
    </div>
</div>

<!-- /# breadcrumb-->
<?php if ($breadcrumb): ?>
  <div id="breadcrumb"><?php print $breadcrumb; ?></div>
<?php endif; ?>

<?php if ($secondary): ?>
<ul id="secondary-tab" class="tabs secondary">
	<?php print drupal_render($secondary)?>
</ul>
<?php endif; ?>