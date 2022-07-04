<div class="header">
	<div class="header_left">
		<table cellspacing="0" cellpadding="0">
			<tr height="40px">
				<td width="500px" align="center"><div class="header_title_1_rows">Công việc</div></td>
			</tr>
		</table>
	</div>
	<div class="header_center">
		<table cellspacing="0" cellpadding="0">
			<tr height="40px">
				<td width="100px" align="center"><div class="header_title_1_rows">Thực hiện</div></td>
				<td width="70px" align="center"><div class="header_title_2_rows">Ngày<br>bắt đầu</div></td>
				<td width="70px" align="center"><div class="header_title_2_rows">Ngày<br>hoàn thành</div></td>
				<td width="40px" align="center"><div class="header_title_2_rows">Tỷ lệ<br>%</div></td>
			</tr>
		</table>
	</div>
	<div class="header_right" id="header_right">
		<?php
			if ($_SESSION["user"] == 0) {
				$duration = 14;
				$date = date_create(date("Y") . "-" . date("m") . "-" . date("d"));
				date_add($date, date_interval_create_from_date_string("-1 days"));
			} else {
				$sql = "SELECT `startday` FROM `tasks` ORDER BY `startday` LIMIT 0,1";
				$result = $conn -> query($sql);
				if ($result -> num_rows == 0) {
					$date = date_create(date("Y") . "-" . date("m") . "-" . date("d"));
				} else {
					$row = $result -> fetch_assoc();
					$date = date_create($row["startday"]);
				}
				$minday = $date;
				$sql = "SELECT `dueday` FROM `tasks` ORDER BY `dueday` DESC LIMIT 0,1";
				$result = $conn -> query($sql);
				if ($result -> num_rows == 0) {
					$maxday = date_create(date("Y") . "-" . date("m") . "-" . date("d"));
					date_add($maxday, date_interval_create_from_date_string("12 days"));
				} else {
					$row = $result -> fetch_assoc();
					$maxday=date_create($row["dueday"]);
					$today = date_create(date("Y") . "-" . date("m") . "-" . date("d"));
					if ($maxday < $today) {
						$maxday = $today;
					}
				}
				$diff=date_diff($date,$maxday);
				$duration = $diff -> format("%R%a") + 2;
				date_add($date, date_interval_create_from_date_string("-1 days"));
			}
			$width = $duration * 40 + 10;
			$today = date_create(date("Y") . "-" . date("m") . "-" . date("d"));
			echo("<table cellspacing=\"0\" cellpadding=\"0\" width=\"" . $width . "px\">");
			echo("<tr height=\"40px\">");
			for ($temp = 0; $temp < $duration; $temp++) {
				date_add($date, date_interval_create_from_date_string("1 days"));
				echo("<td width=\"40px\" align=\"center\">");
				if ($date == $today) {
					echo("<div class=\"today\"><u>" . date_format($today, "d") . "|" . date_format($date, "m") . "</u><br>" . date_format($date, "Y") . "</div>");
				} else {
					echo("<div class=\"date\"><u>" . date_format($date, "d") . "|" . date_format($date, "m") . "</u><br>" . date_format($date, "Y") . "</div>");
				}
				echo("</td>");
			}
			echo("<td width=\"10px\"></td>");
			echo("</tr>");
			echo("</table>");
		?>
	</div>
</div>