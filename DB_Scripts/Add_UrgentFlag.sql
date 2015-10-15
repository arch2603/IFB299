CREATE DATABASE  IF NOT EXISTS `mad_dep` /*!40100 DEFAULT CHARACTER SET latin1 */;
USE `mad_dep`;

ALTER TABLE `mad_dep`.`Jobs` 
ADD COLUMN `UrgentFlag` INT DEFAULT 1 AFTER `CreatedTimeStamp`;
