<?php
  $pdo = dbCon();

	$userFirstname = $_POST['fName'];
	$userSurname = $_POST['sName'];
	$userEmail = $_POST['usrEmail'];
  $userPassword = $_POST['usrPwd'];
  $userPhone = $_POST['usrPhone'];
  $address = $_POST['usrAddr'];
  $suburb = $_POST['usrSub'];
  $postcode = $_POST['usrPost'];
  $state = $_POST['usrState'];
  $userOrigin = $_POST['usrCOO'];
  $userLanguage = $_POST['usrLanguage'];
  $userContact = $_POST['usrPC'];
	
	$sql = "
		INSERT INTO Users(
			FirstName,
			LastName,
      Email,
			Password,
      PhoneNumber,
      UserLevel,
      CreatedTimestamp,
      OriginCountry,
      Language,
      PreferedContactMethod
		)
		VALUES (
			:userFirstname,
			:userSurname,
			:userEmail,
      :userPassword,
      :userPhone,
      1,
      now(),
      :userOrigin,
      :userLanguage,
      :userContact
    );
    
    INSERT INTO Address(
      UserID,
      AddressType,
      Address,
      Suburb,
      Postcode,
      State,
      CreatedTimestamp
    )
    SELECT
      UserID,
      'PHYSICAL',
			:address,
			:suburb,
			:postcode,
			:state,
      now()
    FROM Users
    WHERE Email = :userEmail;
	";

	$stmt = $pdo->prepare($sql);
	
	$stmt->bindValue(':userFirstname', $userFirstname);
	$stmt->bindValue(':userSurname', $userSurname);
  $stmt->bindValue(':userEmail', $userEmail);
	$stmt->bindValue(':userPassword', $userPassword);
  $stmt->bindValue(':userPhone', $userPhone);
	$stmt->bindValue(':userOrigin', $userOrigin);
  $stmt->bindValue(':userLanguage', $userLanguage);
  $stmt->bindValue(':userContact', $userContact);
  $stmt->bindValue(':address', $address);
  $stmt->bindValue(':suburb', $suburb);
  $stmt->bindValue(':postcode', $postcode);
  $stmt->bindValue(':state', $state);
  
  $stmt->execute();
?>

<body>
    <div id="content">
      <h1>Your registration was successful!</h1>
      <h2><a href="home.php">Return to the home page.</a></h2>
</body>