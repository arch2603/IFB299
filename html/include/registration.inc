<body>
	<div id="content">
		<h1>Member Account Registration</h1>
		<p id="formMsg">Fields marked with an <span class="manditory">*</span> are manditory.</p>
		<form id="regForm" method="POST" name="registration" action="registration.php?formFilled=1">
        <p><label>Name<span class="manditory">*</span></label></p>
        <p>
				<input class="box" type="text" name="fName" id="fName" placeholder="Firstname">
				<input class="box" type="text" name="sName" id="sName" placeholder="Surname">
        </p>
			
        <p><label for="usrEmail">Email<span class="manditory">*</span></label></p>
        <p><input class="box" type="email" id="usrEmail" name="usrEmail" placeholder="user@example.com"></p>
			
        <p><label for="usrPwd">Password<span class="manditory">*</span></label></p>
        <p><input class="box" type="password" name="usrPwd" id="usrPwd" placeholder="Choose a Password."></p>
		
        <p><label for="usrPhone">Phone Number</label></p>
        <p><input class="box" type="text" name="usrPhone" id="usrPhone" placeholder="Phone Number"></p>
    
        <p><label for="usrAddr">Address<span class="manditory">*</span></label></p>
        <p><input class="box" type="text" name="usrAddr" id="usrAddr" placeholder="Address"></p>

        <p><label for="usrSub">Suburb<span class="manditory">*</span></label></p>
        <p><input class="box" type="text" name="usrSub" id="usrSub" placeholder="Suburb"></p>
			
        <p><label for="usrPost">Postcode<span class="manditory">*</span></label></p>
        <p><input class="box" type="text" name="usrPost" id="usrPost" placeholder="Postcode"></p>
			
        <p><label for="usrState">State<span class="manditory">*</span></label></p>
        <p>
				<select class="box" name="state" id="state" >
					<option value="" disabled selected>Select a State</option>
					<option value=1>ACT</option>
					<option value=2>NSW</option>
					<option value=3>NT</option>
					<option value=4>Qld</option>
					<option value=5>SA</option>
					<option value=6>Tas</option>
					<option value=7>Vic</option>
					<option value=8>WA</option>
				</select>
        </p>
			
        <p><label for="usrCOO">Country of Origin</label></p>
        <p><input class="box" type="text" name="usrCOO" id="usrCOO" placeholder="Country of Origin"></p>
      
        <p><label for="usrLanguage">Prefered Language</label></p>
        <p><input class="box" type="text" name="usrLanguage" id="usrLanguage" placeholder="Prefered Language"></p>

        <p><input type="submit" value="Register"></p>
		</form>
	</div>
</body>