<!DOCTYPE html>
<html>
	<head>
		<title>Job Details</title>
		<!--Import PHP functions-->
		<?php require 'include/functions.inc'; ?>
	</head>
	<?php
		sessionTest();
		//confirm uuser logged in
		if (isset($_SESSION['userID'])) {
			// run a query to see if the job belongs to them
			$usr = $_SESSION['userID'];
			$job = $_GET['jobID'];
			//connect to db
			$pdo = dbcon();
			//select rows containing this user's ID and the selected JOB id (prevent people from acessing this page without correct privledges)
			$query = "SELECT * FROM Jobs WHERE CreatedUser = :usr AND JobID = :job";

			$statement = $pdo->prepare($query);

			$statement->bindValue(':usr', $usr);
			$statement->bindValue(':job', $job);

			$statement->execute();
			//echo "statement ran \n";
			//echo $statement->rowCount();
			if ($statement->rowCount() > 0){
				//push them to rest of content
				require 'include/jobDetails.inc';
			}
			//otherwise send them back to the previous page
			//else header("Location: $_SERVER[HTTP_REFERER]");
		}
		// if not redirect header to sign in page
		else {
			header('Location: home.php');
		}
	?>
</html>
