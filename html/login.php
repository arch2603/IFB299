<?php
	require 'include/functions.inc';
	
	sessionTest();
	
	$loginEmail = $_POST['loginEmail'];
	$loginPwd = $_POST['loginPwd'];

	$pdo = dbCon();
              
	$sql = "
		SELECT UserID
		FROM Users
		WHERE Email = :email
			AND Password = :password
	";

	$stmt = $pdo->prepare($sql);
	
	$stmt->bindValue(':email', $loginEmail);
	$stmt->bindValue(':password', $loginPwd);
	$stmt->execute();

	if ($stmt->rowCount() > 0) {
		$_SESSION['userID'] = $stmt->fetchColumn();
		header("Location: $_SERVER[HTTP_REFERER]");
	}
	else {
		header("Location: http://$_SERVER[HTTP_HOST]/loginError.php");
	}
?>