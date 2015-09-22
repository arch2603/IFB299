<?php require_once("../include/functions.php"); ?>
<?php $layout_context = "admin"; ?>
<?php include("../include/layouts/header.php"); ?>

<div id="main">
  <div id="navigation">
    &nbsp;
  </div>
  <div id="page">
    <h2>Admin Menu</h2>
    <p>Welcome to the admin area.</p>
    <ul>
      <li><a href="members_access.php">Manage Members Access</a></li>
      <li><a href="volunteer.php">Volunteer Access</a></li>
      <li><a href="manage_admins.php">Manage Admin Users</a></li>
      <li><a href="logout.php">Logout</a></li>
    </ul>
  </div>
</div>

<?php include("../include/layouts/footer.php"); ?>
