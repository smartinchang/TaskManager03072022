<div class="content">
	<div class="content_left" id="content_left">
		<?php
			include("task_content_left.inc");
			include("task_menu.inc");
		?>
	</div>
	<div class="content_center" id="content_center">
		<?php
			include("task_content_center.inc");
		?>
	</div>
	<div class="content_right" id="content_right" onscroll="div_scroll()">
		<table cellspacing="0" cellpadding="0" width="<?php echo($width); ?>px">
			<tr>
				<td width="<?php echo($width); ?>px">
					<?php
						include("task_content_right.inc");
					?>
				</td>
			</tr>
		</table>
	</div>
	<?php
		include("task_add_form.inc");
	?>
</div>