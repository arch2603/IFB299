<!DOCTYPE html>
<html>
	<head>
		<title>Job Registration</title>
		<!--Import PHP functions-->
		<?php require 'include/functions.inc'; ?>
	</head>
	<?php
		sessionTest();
		//if userID php session variable is set send them load the job request page
		if (isset($_SESSION['userID'])) {
			if(isset($_GET['formFilled'])){
				//if form is filled send to processing page
				require 'include/processJob.inc';
			}
			// if the form is not filled send them to the form's page
			else {
				require 'include/jobRequest.inc';
			}
		}
		// if not redirect header to sign in page
		else {
			header('Location: home.php');
		}
	?>
</html>
