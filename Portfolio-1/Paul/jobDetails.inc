<body>
	<div id="content">
		<h1>Welcome user number <?php echo $_SESSION['userID']; ?></h1>
		<br>
		<?php
		//quantum leap here
		$result = $statement->setFetchMode(PDO::FETCH_NUM);
		//create table
		print "<table style='width: 550px; border: 1px solid black'>";
		print "<tr><th>Job ID</th><th>Job Type</th><th>Job Description</th><th>Volunteer</th><th>Created User</th><th>Date of request</th></tr>";
		while ($row = $statement->fetch()){
			print "<tr>";
			print "<td>" . $row[0] . "</td>";
			print "<td>" . $row[1] . "</td>";
			print "<td>" . $row[2] . "</td>";
			print "<td>" . $row[3] . "</td>";
			print "<td>" . $row[4] . "</td>";
			print "<td>" . $row[5] . "</td>";
			//print "<td><form method='POST' action='jobDetails.php?jobID={$row[0]}'><input type='submit' value='Details'></form></td>";
			print "</tr>";
		}
		print "</table>";
		print_r($result);
		print("\n");
		?>
	</div>
</body>
