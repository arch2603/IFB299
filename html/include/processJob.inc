<?php
	sessionTest();
	$pdo = dbCon();
	$jobType = $_POST['jobType'];
	$jobDesc = $_POST['jobDesc'];
	$usr = $_SESSION['userID'];
	
	$query = "
		INSERT INTO Jobs(
			JobType, 
			JobDescription, 
			CreatedUser,
			CreatedTimestamp 
		)
		VALUES (
			:jobType, 
			:jobDesc, 
			:usr,
			now()
		)
	";
	$statement = $pdo->prepare($query);
	$statement->bindValue(':jobType', $jobType);
	$statement->bindValue(':jobDesc', $jobDesc);
	$statement->bindValue(':usr', $usr);
	
	$statement->execute();
?>

<body>
	<div id="content">
		<h1>Job Request Complete</h1>
		<br>
		<a href="home.php">Return to the home page.</a>
	</div>
</body>
