<!DOCTYPE html>
<html>
	<head>
		<title>Member Registration</title>
		<!--Import PHP functions-->
		<?php require 'include/functions.inc'; ?>
	</head>
	<?php
		sessionTest();
		
		if (isset($_SESSION['userID'])) {
			require 'include/alreadyRegistered.inc';
		}
		else {
			if (isset($_GET['formFilled'])) {
				require 'include/processReg.inc';
			}
			else {
				require 'include/registration.inc';
			}
		}
	?>
</html>