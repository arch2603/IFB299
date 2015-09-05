<?php
session_start();
$_SESSION["login"]="1";
$_SESSION["memberID"]="5";
header('Location: JobReq.php');
?>
