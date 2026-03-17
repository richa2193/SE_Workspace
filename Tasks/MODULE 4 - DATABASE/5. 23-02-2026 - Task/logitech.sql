-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:3307
-- Generation Time: Feb 23, 2026 at 02:59 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `logitech`
--

-- --------------------------------------------------------

--
-- Table structure for table `models`
--

CREATE TABLE `models` (
  `id` int(11) NOT NULL,
  `model_name` varchar(255) DEFAULT NULL,
  `model_price` int(11) DEFAULT NULL,
  `manufacturer` varchar(255) DEFAULT NULL,
  `location` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `models`
--

INSERT INTO `models` (`id`, `model_name`, `model_price`, `manufacturer`, `location`) VALUES
(1, 'Dell XPS 13', 99000, 'DELL', 'USA'),
(3, 'Lenovo ThinkPad E14', 72000, 'Lenovo', 'India'),
(4, 'Apple MacBook Air M2', 120000, 'Apple', 'USA'),
(5, 'Asus ROG Strix G15', 98000, 'Asus', 'UK'),
(6, 'HP Pavilion 15', 65000, 'HP', 'China');

--
-- Triggers `models`
--
DELIMITER $$
CREATE TRIGGER `model_after_delete` AFTER DELETE ON `models` FOR EACH ROW BEGIN
    
    INSERT INTO model_logs SET action_perform = 'DELETE', model_id=OLD.id, model_name=OLD.model_name, model_price=OLD.model_price, manufacturer = OLD.manufacturer, location = OLD.location;
    
    END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `model_after_insert` AFTER INSERT ON `models` FOR EACH ROW BEGIN
    
    	INSERT INTO model_logs(action_perform, model_id, model_name, model_price, manufacturer, location) VALUES ('INSERT', NEW.id, NEW.model_name, NEW.model_price, NEW.manufacturer, NEW.location);
    
    END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `model_after_update` AFTER UPDATE ON `models` FOR EACH ROW BEGIN
    
    INSERT INTO model_logs SET action_perform = 'UPDATE', model_id=NEW.id, model_name=NEW.model_name, model_price=NEW.model_price, manufacturer = NEW.manufacturer, location = NEW.location;
    
    END
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `model_logs`
--

CREATE TABLE `model_logs` (
  `log_id` int(11) NOT NULL,
  `action_perform` varchar(255) DEFAULT NULL,
  `model_id` int(11) DEFAULT NULL,
  `model_name` varchar(255) DEFAULT NULL,
  `model_price` int(11) DEFAULT NULL,
  `manufacturer` varchar(255) DEFAULT NULL,
  `location` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `model_logs`
--

INSERT INTO `model_logs` (`log_id`, `action_perform`, `model_id`, `model_name`, `model_price`, `manufacturer`, `location`) VALUES
(1, 'INSERT', 8, 'HP Pavillion 15', 65000, 'HP', 'China'),
(2, 'UPDATE', 1, NULL, 98000, 'DELL', 'USA'),
(3, 'UPDATE', 1, NULL, 98000, 'DELL', 'USA'),
(4, 'UPDATE', 1, 'Dell XPS 13', 99000, 'DELL', 'USA'),
(5, 'DELETE', 8, NULL, 65000, 'HP', 'China'),
(6, 'DELETE', 7, 'HP Pavillion 15', 65000, 'HP', 'China');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `models`
--
ALTER TABLE `models`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `model_logs`
--
ALTER TABLE `model_logs`
  ADD PRIMARY KEY (`log_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `models`
--
ALTER TABLE `models`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;

--
-- AUTO_INCREMENT for table `model_logs`
--
ALTER TABLE `model_logs`
  MODIFY `log_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
