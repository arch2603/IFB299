<!DOCTYPE html>
<html>
	<head>
		<title>Migrant Help Desk - Home</title>
		<?php require 'include/functions.inc'; ?>
	</head>

	<body>
		<?php
			sessionTest();
			$pdo = dbCon();
		?>
		  
		<form method='POST' id= 'loginForm' action=login.php name='login' >
			<input class='box' type='text' name='loginEmail' id='loginEmail' placeholder='Email'>
			<input class='box' type='password' name='loginPwd' id='loginPwd' placeholder='Password'>
			<input type='submit' value='Login'>
		</form>
		
		<form method='POST' id='logoutForm' action=logout.php name='logout' >
			<input type='submit' value='Logout'>
		</form>
		
		<h2><a href="registration.php">Register</a></h2>
		
		<h2><a href="jobrequest.php">Log a Job</a></h2>
	</body>
</html>