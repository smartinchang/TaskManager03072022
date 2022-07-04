<div class="title">
	<table cellspacing="0" cellpadding="0">
		<tr height="35px">
			<td width="10px"></td>
			<td><a href="index.html"><img src="logo.png" height="30px"></a></td>
			<td width="10px"></td>
			<td><h1>Quản lý công việc</h1></td>
			<td width="10px"></td>
			<?php
				if ($_SESSION["user"] == 0) {
					echo("<td><a href=\"index.php?obj=user&act=login\"><div class=\"button\">Đăng nhập</div></a></td>");
					echo("<td width=\"1px\"></td>");
					echo("<td><a href=\"index.php?obj=user&act=signup\"><div class=\"button\">Đăng ký</div></a></td>");
				} else {
					echo("<td>");
					echo("<select>");
					echo("<option>Tất cả các công việc</option>");
					echo("<option>Các công việc chưa hoàn thành</option>");
					echo("<option>Các công việc trễ hạn</option>");
					echo("<option>Các công việc đã hoàn tất</option>");
					echo("</select>");
					echo("</td>");
					echo("<td width=\"10px\"></td>");
					echo("<td><a href=\"#\" onclick=\"new_task_form()\"><div class=\"button\">Thêm công việc</div></a></td>");
					echo("<td width=\"1px\"></td>");
					echo("<td><a href=\"logout.php\"><div class=\"button\">Thoát</div></a></td>");
				}
			?>
		</tr>
	</table>
</div>
