<?php
	require 'include/functions.inc';
	sessionTest();
	
	unset($_SESSION['userID']);
	header("Location: $_SERVER[HTTP_REFERER]");
?>