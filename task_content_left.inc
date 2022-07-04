<ul class="tree">
	<?php
		$sql = "SELECT `id`,`title` FROM `tasks` WHERE `taskfather`=0 ORDER BY `position`";
		$result = $conn -> query($sql);
		if ($result -> num_rows > 0) {
			while($row = $result -> fetch_assoc()) {
				echo("<li>");
				echo("<input type=\"checkbox\" class=\"checkbox\" id=\"c" . $row["id"]. "\" value=\"" . $row["id"] . "\" onclick=\"change(" . $row["id"] . ")\">&nbsp;");
				echo("<div class=\"text\" id=\"t" . $row["id"] . "\" onmousedown=\"menu(event," . $row["id"] . ")\">" . $row["title"] . "</div>");
				echo("<ul id=\"u" . $row["id"] . "\" style=\"display:none\"></ul>");
				echo("</li>");
			}
		}
	?>
</ul>