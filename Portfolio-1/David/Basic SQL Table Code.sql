CREATE TABLE Members(
Member_id INT NOT NULL AUTO_INCREMENT,
First_Name VARCHAR(15) NOT NULL,
Last_Name VARCHAR(15) NOT NULL,
Phone_Number INT(12),
PRIMARY KEY (Member_id);
);

CREATE TABLE Volounteers(
Volounteer_id INT NOT NULL AUTO_INCREMENT,
First_Name VARCHAR(15) NOT NULL,
Last_Name VARCHAR(15) NOT NULL,
Phone_Number INT(12)
PRIMARY KEY (Volounteer_id);
);

CREATE TABLE Jobs(
Job_id INT NOT NULL AUTO_INCREMENT,
Job_Description VARCHAR(100) NOT NULL,
Job_Comments BLOB,
PRIMARY KEY (Job_id);
);

CREATE TABLE Members_Link(
Member_id INT NOT NULL,
Job_id INT NOT NULL,
PRIMARY KEY (Members_id);
);