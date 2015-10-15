<!DOCTYPE html>
<html>
	<head>
		<?php
			session_start();
			//need to fix this logic here
			if(!($_SESSION["login"] == 1)){
				//send them to login page
				header('Location: index.html');
				exit;
			}
		?>
	</head>
	<body>
	<form action="ProcessJobRequest.php" method="post">
		Job Type:
		<br>
		<select name="jobtype">
			<option value="general">General</option>
			<option value="plumbing">Plumbing</option>
			<option value="drywalling">Dry Walling</option>
			<option value="tiling">Tiling</option>
			<option value="electric">Electric</option>
			<option value="masonary">Masonary</option>
		</select>
		<br>
		Job Description:
		<br>
		<textarea name="jobdesc" rows="10" cols="30"></textarea>
		<br>
		<input type="submit" value="Submit">
	</form>
	</body>
</html>
