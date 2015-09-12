<?php
	function dbCon() 
	{
		try{

			$pdo = new PDO('mysql:host=localhost;dbname=mad_dep', 'root', 'Password1');
		}
	}
	catch(PDOException $e)
	{
		echo $e->getMessage();
	}
  
  function sessionTest() {
    if (session_status() !== PHP_SESSION_ACTIVE) {
      session_start();
    }
  }
?>