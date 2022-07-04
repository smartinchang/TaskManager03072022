CREATE TABLE `tasks` (
	`id` INT UNSIGNED NOT NULL AUTO_INCREMENT ,
	`title` TEXT NOT NULL ,
	`user` INT UNSIGNED NOT NULL ,
	`taskfather` INT UNSIGNED NOT NULL ,
	`performer` TEXT ,
	`position` INT UNSIGNED NOT NULL ,
	`startday` TEXT ,
	`dueday` TEXT ,
	`rate` TINYINT NOT NULL DEFAULT '0' ,
	PRIMARY KEY (`id`)
) ENGINE = InnoDB;