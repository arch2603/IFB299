<?php
	session_start();
	//if not logged in kick them to login page (for now index)
	if($_SESSION["login"] != 1){
		header('Location: JobReq.php';
		//header location and all that jazz
		exit;
	}
	//echo "asdf";
	//establish db connection
	$servername = "127.0.0.1";
	$username = "root";
	$password = "Password1";
	//create connection
	$con = new mysqli($hostname, $username, $password);
	//echo "connection attempted";
	//see if it worked
	if ($con->connection_error){
		die("Connection failed: " . $con->connect_error);
		header('Location: JobeReq.php');
		//exit;
	}
	//no connection error insert data into database
	else{
	//	$sql = "INSERT INTO ActiveJobs (memberID, type, description) VALUES ($_SESSION["memberID"], $_POST["jobtype"], $_POST["jobdesc"])";
	}
	//echo "query attempted";
	//show some information telling them that the task has been completed (send them to a page of some sort)
	//header location thing
	header('Location: index.html');
?>
