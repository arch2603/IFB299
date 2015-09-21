<!DOCTYPE html>
<html>
	<head>
		<title>Job Details</title>
		<!--Import PHP functions-->
		<?php require 'include/functions.inc'; ?>
	</head>
	<?php
		sessionTest();
		//confirm user logged in
		if (isset($_SESSION['userID'])) {
			// run a query to see if the job belongs to them
			$usr = $_SESSION['userID'];
			$job = $_GET['jobID'];
			//connect to db
			$pdo = dbcon();
			//select rows containing this user's ID and the selected JOB id (prevent people from accessing this page without correct privileges)

			$query = "
					SELECT J.JobID,
						JT.JobTypeDesc,
						J.JobDescription,
						CONCAT(V.FirstName,' ',V.LastName) as 'assignee',
						CONCAT(M.FirstName,' ',M.LastName) as 'creator',
						J.CreatedTimestamp
					FROM Jobs J
						INNER JOIN JobType JT on J.JobType = JT.JobTypeID
						LEFT JOIN Users V on J.AssignedUser = V.UserID
						LEFT JOIN Users M on J.CreatedUser = M.UserID
			";

			if ($_SESSION['userLevel'] == 2) {
				$query .= " WHERE JobID = :job;";

				$statement = $pdo->prepare($query);

				$statement->bindValue(':job', $job);
			}
			else {
				$query .= " WHERE CreatedUser = :usr
								AND JobID = :job;
				";

				$statement = $pdo->prepare($query);

				$statement->bindValue(':usr', $usr);
				$statement->bindValue(':job', $job);
			};

			$statement->execute();
			//echo "statement ran \n";
			//echo $statement->rowCount();
			if ($statement->rowCount() > 0) {
				//push them to rest of content
				require 'include/jobDetails.inc';
			}
		}
		// if not redirect header to sign in page
		else {
			header('Location: home.php');
		}
	?>
</html>
