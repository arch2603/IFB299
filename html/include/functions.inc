<?php
	function dbCon() {
		$pdo = new PDO('mysql:host=localhost;dbname=mad_dep', 'root', 'Password1');
		return $pdo;
	}
  
  function sessionTest() {
    if (session_status() !== PHP_SESSION_ACTIVE) {
      session_start();
    }
  }
?>