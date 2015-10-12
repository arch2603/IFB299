<body>
	<?php
		require 'include/header.inc';
	?>

	<div id="content">
		<h2>Welcome <?php echo $_SESSION['firstName']; ?></h2>
		<br>
			<?php
				//run the query for the table
				$pdo = dbCon();
				$usr = $_SESSION['userID'];
				$query = "
					SELECT
						J.JobID,
						JT.JobTypeDesc,
						CONCAT(DATEDIFF(NOW(),J.CreatedTimestamp),' Day(s)'),
						CONCAT(V.FirstName,' ',V.LastName) as 'assignee'
					FROM Jobs J
						INNER JOIN JobType JT on J.JobType = JT.JobTypeID
						LEFT JOIN Users V on J.AssignedUser = V.UserID
				";
				if ($_SESSION['userLevel'] == 1) {
					$query .= " WHERE CreatedUser = :usr";
				};
				$query .= ";";
				$statement = $pdo->prepare($query);
				$statement->bindValue(':usr', $usr);
				$statement->execute();
				//create table
				
				print "<table style='width: 500px; border: 1px solid black'>";
				print "<tr><th>Job ID</th><th>Job Type</th><th>Assignee</th><th>Age of Job</th><th>Details Page</th></tr>";
				while ($row = $statement->fetch(PDO::FETCH_NUM)){
					print "<tr>";
					print "<td>" . $row[0] . "</td>";
					print "<td>" . $row[1] . "</td>";
					print "<td>" . $row[3] . "</td>";
					print "<td>" . $row[2] . "</td>";
					print "<td><form method='POST' action='jobDetails.php?jobID={$row[0]}'><input type='submit' value='Details'></form></td>";
					print "</tr>";
				}
				print "</table>";
				print("\n");
			?>
	</div>
</body>
