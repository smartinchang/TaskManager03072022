<?php
	$sql = "SELECT `id`,`performer`,`startday`,`dueday`,`rate` FROM `tasks` WHERE `taskfather`=0 ORDER BY `position`";
	$result = $conn -> query($sql);
	if ($result -> num_rows > 0) {
		while($row = $result -> fetch_assoc()) {
			echo("<div>");
			echo("<div class=\"operator\">" . $row["performer"] . "</div>");
			echo("<div class=\"detail_day\">");
			$startday = date_create($row["startday"]);
			echo(date_format($startday, "d/m/Y"));
			echo("</div>");
			echo("<div class=\"detail_day\">");
			$dueday = date_create($row["dueday"]);
			echo(date_format($dueday, "d/m/Y"));
			echo("</div>");
			echo("<div class=\"detail_rate\">" . $row["rate"] . "%</div>");
			echo("</div>");
			echo("<div id=\"tr" . $row["id"] . "\" style=\"display:none\">");
			echo("</div>");
		}
	}
?>