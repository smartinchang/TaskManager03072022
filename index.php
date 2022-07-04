<?php
	date_default_timezone_set('Asia/Ho_Chi_Minh');
	session_start();
	if(!isset($_SESSION["user"]))
		$_SESSION["user"] = 0;
?>
<!DOCTYPE html>
<html>
 <head>
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
  <link rel="stylesheet" href="style.css">
  <title>Quản lý công việc</title>
	<link rel="icon" type="image/x-icon" href="logo.png">
	<script src="script.js"></script>
 </head>
 <body>
	<div class="container">
		<?php
			include("database_connection.inc");
			include("header.inc");
			include("task_header.inc");
			if ($_SESSION["user"] != 0) {
				include("task_content.inc");				
			} else {
				include("login.inc");				
			}
		?>
	</div>
 </body>
</html>
<script async src="https://www.googletagmanager.com/gtag/js?id=UA-133423368-1"></script>
<script>
	window.dataLayer = window.dataLayer || [];
	function gtag(){dataLayer.push(arguments);}
	gtag('js', new Date());
	gtag('config', 'UA-133423368-1', { 'optimize_id': 'GTM-W433962'});
</script>