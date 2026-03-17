-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:3307
-- Generation Time: Mar 17, 2026 at 10:11 AM
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
-- Database: `school_db`
--

DELIMITER $$
--
-- Procedures
--
CREATE DEFINER=`root`@`localhost` PROCEDURE `check_department` (IN `eid` INT)   BEGIN 
    
    DECLARE dept int;
    
    SELECT dept_id INTO dept FROM employees WHERE emp_id = eid;
    
    IF dept = 1 THEN
    
    SELECT 'Employee belongs to HR Department' AS result;
    
    ELSE
    
    SELECT 'Employee belongs to another Department' AS result;
    
    END IF;
    
    END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `getcoursedetail` (IN `cid` INT)   BEGIN 
    	
        SELECT * FROM courses WHERE course_id = cid;
        
   END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `getemployeesbydepartment` (IN `dept` INT)   BEGIN 
    	
        SELECT * FROM employees WHERE dept_id = dept;
        
    END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `show_employee_names` ()   BEGIN 
        
        DECLARE done int DEFAULT 0;
        
        DECLARE empname varchar(255);
        
        DECLARE emp_cursor CURSOR FOR 
        SELECT emp_name FROM employees;
        
        DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = 1;
        
        OPEN emp_cursor;
        
        read_loop: LOOP
        
        	FETCH emp_cursor INTO empname;
            
            IF done = 1 THEN 
            
            	LEAVE read_loop;
                
            END IF;
            
            SELECT empname AS employee_name;
            
       END LOOP;
       
       CLOSE emp_cursor;
       
  END$$

DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `courses`
--

CREATE TABLE `courses` (
  `course_id` int(11) NOT NULL,
  `course_name` varchar(255) DEFAULT NULL,
  `course_duration` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `courses`
--

INSERT INTO `courses` (`course_id`, `course_name`, `course_duration`) VALUES
(1, 'computer science', '4 year'),
(2, 'Digital marketing', '3 year'),
(4, 'Data Science', '3 year'),
(5, 'Artifical Intelligence', '2 year'),
(6, 'cyber security', '5 year');

-- --------------------------------------------------------

--
-- Table structure for table `department`
--

CREATE TABLE `department` (
  `dept_id` int(11) NOT NULL,
  `dept_name` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `department`
--

INSERT INTO `department` (`dept_id`, `dept_name`) VALUES
(1, 'HR'),
(2, 'IT'),
(3, 'Finance');

-- --------------------------------------------------------

--
-- Table structure for table `employees`
--

CREATE TABLE `employees` (
  `emp_id` int(11) NOT NULL,
  `emp_name` varchar(255) DEFAULT NULL,
  `dept_id` int(11) DEFAULT NULL,
  `salary` int(11) DEFAULT NULL,
  `last_modified` timestamp NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employees`
--

INSERT INTO `employees` (`emp_id`, `emp_name`, `dept_id`, `salary`, `last_modified`) VALUES
(1, 'Richa', 1, 75000, '2026-03-07 10:33:32'),
(2, 'purvi', 1, 20000, '2026-03-07 10:25:45'),
(3, 'Hetal', 2, 10000, '2026-03-07 10:25:45'),
(9, 'Harsha', 1, 50000, '2026-03-07 10:25:45'),
(10, 'Yash', 2, 120000, '2026-03-07 10:25:45'),
(11, 'Jatin', 1, 55000, '2026-03-07 10:25:45'),
(12, 'Hardik', 2, 60000, '2026-03-07 10:25:45'),
(13, 'Yansh', 1, 70000, '2026-03-07 10:25:45'),
(14, 'Kunal', 1, 80000, '2026-03-07 10:25:45'),
(15, 'Chetna', 2, 56000, '2026-03-07 10:25:45');

--
-- Triggers `employees`
--
DELIMITER $$
CREATE TRIGGER `after_employee_insert` AFTER INSERT ON `employees` FOR EACH ROW BEGIN
        
        	INSERT INTO employee_log(emp_id, emp_name, action_type) VALUES (new.emp_id, new.emp_name, 'NEW EMPLOYEE ADDED');
            
       	END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `update_last_modified` BEFORE UPDATE ON `employees` FOR EACH ROW BEGIN 
    
    	SET new.last_modified = CURRENT_TIMESTAMP;
        
    END
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Stand-in structure for view `employee_department_view`
-- (See below for the actual view)
--
CREATE TABLE `employee_department_view` (
`emp_name` varchar(255)
,`dept_name` varchar(255)
,`salary` int(11)
);

-- --------------------------------------------------------

--
-- Table structure for table `employee_log`
--

CREATE TABLE `employee_log` (
  `log_id` int(11) NOT NULL,
  `emp_id` int(11) DEFAULT NULL,
  `emp_name` varchar(255) DEFAULT NULL,
  `action_type` varchar(255) DEFAULT NULL,
  `action_time` timestamp NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employee_log`
--

INSERT INTO `employee_log` (`log_id`, `emp_id`, `emp_name`, `action_type`, `action_time`) VALUES
(1, 14, 'Kunal', 'NEW EMPLOYEE ADDED', '2026-03-07 10:19:01'),
(2, 15, 'Chetna', 'NEW EMPLOYEE ADDED', '2026-03-07 10:20:49');

-- --------------------------------------------------------

--
-- Table structure for table `orders`
--

CREATE TABLE `orders` (
  `order_id` int(11) NOT NULL,
  `customer_name` varchar(255) DEFAULT NULL,
  `amount` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `orders`
--

INSERT INTO `orders` (`order_id`, `customer_name`, `amount`) VALUES
(1, 'Richa', 5000),
(2, 'Jiyan', 6000),
(3, 'Thavan', 7000);

-- --------------------------------------------------------

--
-- Structure for view `employee_department_view`
--
DROP TABLE IF EXISTS `employee_department_view`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `employee_department_view`  AS SELECT `employees`.`emp_name` AS `emp_name`, `department`.`dept_name` AS `dept_name`, `employees`.`salary` AS `salary` FROM (`employees` join `department` on(`employees`.`dept_id` = `department`.`dept_id`)) WHERE `employees`.`salary` >= 50000 ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `courses`
--
ALTER TABLE `courses`
  ADD PRIMARY KEY (`course_id`);

--
-- Indexes for table `department`
--
ALTER TABLE `department`
  ADD PRIMARY KEY (`dept_id`);

--
-- Indexes for table `employees`
--
ALTER TABLE `employees`
  ADD PRIMARY KEY (`emp_id`),
  ADD KEY `dept_id` (`dept_id`);

--
-- Indexes for table `employee_log`
--
ALTER TABLE `employee_log`
  ADD PRIMARY KEY (`log_id`);

--
-- Indexes for table `orders`
--
ALTER TABLE `orders`
  ADD PRIMARY KEY (`order_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `courses`
--
ALTER TABLE `courses`
  MODIFY `course_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;

--
-- AUTO_INCREMENT for table `department`
--
ALTER TABLE `department`
  MODIFY `dept_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `employees`
--
ALTER TABLE `employees`
  MODIFY `emp_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=16;

--
-- AUTO_INCREMENT for table `employee_log`
--
ALTER TABLE `employee_log`
  MODIFY `log_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table `orders`
--
ALTER TABLE `orders`
  MODIFY `order_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `employees`
--
ALTER TABLE `employees`
  ADD CONSTRAINT `employees_ibfk_1` FOREIGN KEY (`dept_id`) REFERENCES `department` (`dept_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
