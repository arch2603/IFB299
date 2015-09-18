<!DOCTYPE html>
<html>
	<head>
		<title>Job Overview</title>
		<!--Import PHP functions-->
		<?php require 'include/functions.inc'; ?>
	</head>
	<?php
		sessionTest();
		//if login php session variable is set send them load the job request page
		if (isset($_SESSION['userID'])) {
			require 'include/landing.inc';
		}
		// if not redirect header to sign in page
		else {
			header('Location: home.php');
		}
	?>
</html>
