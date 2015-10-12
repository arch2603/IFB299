<div id="header"><!--Standardised header across all pages.-->
  <h1 class="header-text">Migrant Services</h1><br>
</div>

<div id="menu">
  <div id='navigation'>
    <a href='home.php'>Home</a> <a href='jobRequest.php'>Request Help</a> <a href='registration.php'>Register</a>
  </div>
  <?php
    sessionTest();

    if (isset($_SESSION['userID'])) {
      echo "
        <form method='POST' id='logoutForm' action=logout.php name='logout' >
          <input type='submit' value='Logout'>
        </form>
      ";
    }
  ?>
</div>