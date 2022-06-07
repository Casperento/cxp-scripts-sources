-- Change `altislife` to your database name
USE `altislife`;
CREATE TABLE IF NOT EXISTS `bugTracker` (
  `id` int(6) NOT NULL AUTO_INCREMENT,
  `pid` varchar(17) NOT NULL,
  `name` varchar(32) NOT NULL,
  `bugReported` text NOT NULL,
  `expectedBhv` text NOT NULL,
  `insert_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
