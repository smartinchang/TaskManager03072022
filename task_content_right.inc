<?php
	$sql = "SELECT `startday` FROM `tasks` WHERE `user`=" . $_SESSION["user"] . " ORDER BY `startday` LIMIT 0,1";
	$result = $conn -> query($sql);
	if ($result -> num_rows > 0) {
		$row = $result -> fetch_assoc();
		$minday = date_create($row["startday"]);
	}
	$sql = "SELECT `id`,`startday`,`dueday`,`rate` FROM `tasks` WHERE `user`=" . $_SESSION["user"] . " ORDER BY `position`";
	$result = $conn -> query($sql);
	if ($result -> num_rows > 0) {
		while($row = $result -> fetch_assoc()) {
			$startday = date_create($row["startday"]);
			$diff = date_diff($minday,$startday);
			$start_diff = $diff -> format("%a");
			$start_width = $start_diff * 40;
			$dueday = date_create($row["dueday"]);
			$diff = date_diff($startday,$dueday);
			$due_diff = $diff -> format("%a");
			$due_width = ($due_diff + 1) * 40 - 2;
			echo("<div style=\"height:20px\">");
			echo("<div class=\"blank\" style=\"width:" . $start_width . "px;\"></div>");
			echo("<div class=\"duration\" style=\"width:" . $due_width . "px;\">");
			echo("<div class=\"process\" style=\"width:196px\">" . $due_diff . "%</div>");
			echo("</div>");
			echo("</div>");
			echo("<div id=\"d" . $row["id"] . "\"></div>");
		}
	}
?>
<!--
<div style="height:20px">
	<div class="blank" style="width:80px;"></div>
	<div class="duration" style="width:198px;">
		<div class="process" style="width:196px">100%</div>
	</div>
</div>
<div id="d1">
	<div style="height:20px">
		<div class="blank" style="width:240px;"></div>
		<div class="duration" style="width:398px;">
			<div class="process" style="width:200px">50%</div>
		</div>
	</div>
	<div id="d2">
		<div style="height:20px">
			<div class="blank" style="width:80px;"></div>
			<div class="duration" style="width:198px;"></div>
		</div>
		<div style="height:20px">
			<div class="blank" style="width:240px;"></div>
			<div class="duration" style="width:396px;"></div>
		</div>
	</div>
	<div style="height:20px">
		<div class="blank" style="width:80px;"></div>
		<div class="duration" style="width:198px;"></div>
	</div>
	<div style="height:20px">
		<div class="blank" style="width:240px;"></div>
		<div class="duration" style="width:398px;"></div>
	</div>
</div>
-->
