<div id="new_task" style="display:none">
	<table cellspacing="0" cellpadding="0">
		<tr height="20px"><td colspan="3"><b>Công việc mới</b></td></tr>
		<tr height="1px"><td colspan="3" bgcolor="orange"></td></tr>
		<tr height="5px"><td colspan="3"></td></tr>
		<tr>
			<td>Nội dung công việc</td>
			<td width="5px"></td>
			<td><input type="text" id="task_title" placeholder="Vui lòng nhập nội dung công việc" style="width:300px"></td>
		</tr>
		<tr height="2px"><td colspan="3"></td></tr>
		<tr>
			<td>Người thực hiện</td>
			<td width="5px"></td>
			<td><input type="text" id="task_performer" placeholder="Vui lòng nhập người thực hiện" style="width:300px"></td>
		</tr>
		<tr height="2px"><td colspan="3"></td></tr>
		<tr>
			<td>Ngày bắt đầu</td>
			<td width="5px"></td>
			<td><input type="date" id="task_startday"></td>
		</tr>
		<tr height="2px"><td colspan="3"></td></tr>
		<tr>
			<td>Ngày kết thúc</td>
			<td width="5px"></td>
			<td><input type="date" id="task_dueday"></td>
		</tr>
		<tr height="5px"><td colspan="3"></td></tr>
		<tr><td colspan="3" align="center"><input type="submit" value="Nhập" onclick="new_task_submit()"> <input type="button" value="Đóng" onclick="new_task_form_close()"></td></tr>
	</table>
</div>