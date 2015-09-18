<body>
	<div id="content">
		<h1>Job Request Form</h1>
		<p id="formMsg">Fields marked with an <span class="manditory">*</span> are manditory.</p>
		<form id="reqForm" method="POST" name="request" action="jobrequest.php?formFilled=1">
			<p><label for="jobType">JobType<span class="manditory">*</span></label></p>
			<p>
				<select class="box" name="jobType" id="jobType" >
					<option value="0">General</option>
					<option value="1">Plumbing</option>
					<option value="2">Dry Walling</option>
					<option value="3">Tiling</option>
					<option value="4">Electric</option>
					<option value="5">Masonary</option>
				</select>
			</p>
			<p><label for="jobDesc">Job Description<span class="manditory">*</span></label></p>
			<p><textarea name="jobDesc" id="jobDesc" rows="4" cols="25"></textarea></p>
			<p><input type="submit" value="Submit Job Request"></p>
		</form>
	</div>
</body>
