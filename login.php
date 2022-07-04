<?php
	session_start();
	$_SESSION["user"] = 1;
	header('Location: index.php');
?>