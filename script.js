let task = 0;
function change(id) {
	if (document.getElementById("c" + id).value == 1) {
		document.getElementById("c" + id).value = 0;
		document.getElementById("u" + id).style.display = "none";
		document.getElementById("tr" + id).style.display = "none";
		document.getElementById("d" + id).style.display = "none";
	} else {
		document.getElementById("c" + id).value = 1;
		document.getElementById("u" + id).style.display = "block";
		document.getElementById("tr" + id).style.display = "block";
		document.getElementById("d" + id).style.display = "block";
	}
}
function menu(event,id) {
	task = id;
	let pos_x = document.getElementById("t" + id).offsetLeft;
	let pos_y = document.getElementById("t" + id).offsetTop + 15;
	document.getElementById("task_menu").style.left = pos_x + "px";
	document.getElementById("task_menu").style.top = pos_y + "px";
	document.getElementById("task_menu").style.display = "block";
	
}
function div_scroll() {
	document.getElementById("header_right").scrollLeft = document.getElementById("content_right").scrollLeft;
	document.getElementById("content_left").scrollTop = document.getElementById("content_right").scrollTop;
	document.getElementById("content_center").scrollTop = document.getElementById("content_right").scrollTop;
}
function task_menu_close() {
	document.getElementById("task_menu").style.display = "none";
}
function new_task_form() {
	document.getElementById("task_menu").style.display = "none";
	document.getElementById("new_task").style.display = "block";
}
function new_task_form_close() {
	document.getElementById("new_task").style.display = "none";
	document.getElementById("task_title").value = "";
	document.getElementById("task_performer").value = "";
	document.getElementById("task_startday").value = "";
	document.getElementById("task_dueday").value = "";
	task = 0;
}
function new_task_submit() {
	error = 0;
	task_title = document.getElementById("task_title").value;
	task_performer = document.getElementById("task_performer").value;
	task_startday = document.getElementById("task_startday").value;
	task_dueday = document.getElementById("task_dueday").value;
	if ((error == 0) && (task_title == "")) {
		error = 1;
		alert("Vui lòng nhập nội dung công việc");
		document.getElementById("task_title").focus();
	}
	if (error == 0) {
		alert("task_add.php?id=" + task + "&title=" + task_title + "&performer=" + task_performer + "&startday=" + task_startday + "&dueday=" + task_dueday);
		new_task_form_close();
	}
}