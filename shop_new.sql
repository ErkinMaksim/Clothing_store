CREATE SCHEMA `shop_new` DEFAULT CHARACTER SET utf8 COLLATE utf8_bin ;

CREATE TABLE `shop_new`.`category` (
  `id` INT NOT NULL,
  `name` VARCHAR(128) NOT NULL,
  `discount` TINYINT NOT NULL,
  PRIMARY KEY (`id`));

ALTER TABLE `shop_new`.`category` 
ADD COLUMN `alias_name` VARCHAR(128) NULL AFTER `discount`;

DROP TABLE `shop_new`.`category`;

DROP DATABASE `shop_new`;

CREATE TABLE `shop_new`.`brand` (
  `id` INT NOT NULL,
  `name` VARCHAR(128) NOT NULL,
  PRIMARY KEY (`id`));

CREATE TABLE `shop_new`.`product-type` (
  `id` INT NOT NULL,
  `name` VARCHAR(128) NOT NULL,
  PRIMARY KEY (`id`));

INSERT INTO `shop_new`.`category` (`id`, `name`, `discount`) VALUES ('1', 'Женская одежда', '5');
INSERT INTO `shop_new`.`category` (`id`, `name`, `discount`) VALUES ('2', 'Мужская одежда', '0');
