-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:3307
-- Generation Time: Mar 17, 2026 at 10:13 AM
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
-- Database: `tops`
--

-- --------------------------------------------------------

--
-- Table structure for table `course`
--

CREATE TABLE `course` (
  `course_id` int(11) NOT NULL,
  `course_name` varchar(255) DEFAULT NULL,
  `fees` int(11) DEFAULT NULL,
  `stattus` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `stu_id` int(11) NOT NULL,
  `name` varchar(255) DEFAULT NULL,
  `surname` varchar(255) DEFAULT NULL,
  `mobile_number` bigint(11) DEFAULT NULL,
  `email` varchar(255) DEFAULT NULL,
  `city` varchar(255) DEFAULT NULL,
  `course_id` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`stu_id`, `name`, `surname`, `mobile_number`, `email`, `city`, `course_id`) VALUES
(1, 'Richa', 'Parmar', 2147483647, 'richa@gmail.com', 'Ahmedabad', 101),
(2, 'Purvi', 'Rathod', 2147483647, 'palu@gmail.com', 'Baroda', 102),
(3, 'Yash', 'Vala', 2147483647, 'yash@gmail.com', 'Ahmedabad', 103),
(4, 'Jatin', 'Rathod', 2147483647, 'jatin@gmail.com', 'UK', 104),
(5, 'Vaibhav', 'Ahir', 2147483647, 'vaibhav@gmail.com', 'USA', 105),
(6, 'Chetna', 'Vaghela', 2147483647, 'chetna@gmail.com', 'Canada', 106),
(7, 'Jiyan', 'Patel', 1346798523, 'jiyan@gmail.com', 'Rajkot', 107),
(8, 'Kavya', 'Tank', 2147483647, 'kavya@gmail.com', 'Hydarabad', 108),
(9, 'Hetal', 'solanki', 2147483647, 'hetal@gmail.com', 'Banglor', 109),
(10, 'Hardik', 'Rakholiya', 2147483647, 'hardik@gmail.com', 'Pune', 110);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `course`
--
ALTER TABLE `course`
  ADD PRIMARY KEY (`course_id`);

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`stu_id`),
  ADD KEY `course_id` (`course_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `student`
--
ALTER TABLE `student`
  MODIFY `stu_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
