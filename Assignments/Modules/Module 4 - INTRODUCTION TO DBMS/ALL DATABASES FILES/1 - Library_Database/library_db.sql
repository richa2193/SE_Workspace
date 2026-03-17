-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:3307
-- Generation Time: Mar 17, 2026 at 10:09 AM
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
-- Database: `library_db`
--

DELIMITER $$
--
-- Procedures
--
CREATE DEFINER=`root`@`localhost` PROCEDURE `calculate_book_price` ()   BEGIN
        
        	DECLARE book1_price decimal(10,2) DEFAULT 500;
            DECLARE book2_price decimal(10,2) DEFAULT 300;
            DECLARE discount_amount decimal(10,2) DEFAULT 50;
            
            DECLARE total_price decimal(10,2);
            DECLARE discounted_price decimal(10,2);
            
            SET total_price = book1_price + book2_price;
            SET discounted_price = total_price - discount_amount;
            
            SELECT CONCAT('total price of the books : ', total_price) AS TotalPrice,
            CONCAT('price after discount: ', 'discounted_price') AS priceafterdiscount;
            
       END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `check_book_price` (IN `book_price` DECIMAL(10,2))   BEGIN 
    
    	IF book_price > 100 THEN
        
        	SELECT concat('the book price is above 100:', book_price) AS Message;
            
        ELSE 
        	SELECT concat('the book price is 100 or below:', book_price) AS Message;
        END IF;
        
    END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `display_all_books` ()   BEGIN
    	
        DECLARE v_book_id INT;
        DECLARE v_title varchar(255);
        DECLARE v_author varchar(255);
        DECLARE v_publisher varchar(255);
        DECLARE v_year_of_publication varchar(255);
        DECLARE v_price DECIMAL(10,2);
        DECLARE v_genre varchar(255);
        DECLARE v_author_id INT;
        DECLARE v_last_modified DATETIME;
        DECLARE done INT DEFAULT 0;
        
        DECLARE book_cursor CURSOR FOR 
        	SELECT book_id, title, author, publisher, year_of_publication, price, genre, author_id, last_modified 
        FROM books;
        
        DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = 1;
        
        OPEN book_cursor;
        
        read_loop: LOOP
        FETCH book_cursor INTO v_book_id, v_title, v_author, v_publisher, v_year_of_publication, v_price, v_genre, v_author_id, 				v_last_modified;
        IF done THEN
            LEAVE read_loop;
        END IF;

		SELECT 
            v_book_id AS BookID,
            v_title AS Title,
            v_author AS Author,
            v_publisher AS Publisher,
            v_year_of_publication AS YearOfPublication,
            v_price AS Price,
            v_genre AS Genre,
            v_author_id AS AuthorID,
            v_last_modified AS LastModified;
    END LOOP;
    
    CLOSE book_cursor;
    
    END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `fetch_all_members` ()   BEGIN
    
    		DECLARE v_member_id INT;
    		DECLARE v_member_name VARCHAR(255);
    		DECLARE v_date_of_membership DATE;
    		DECLARE v_email VARCHAR(255);
    		DECLARE done INT DEFAULT 0;

    
    	DECLARE member_cursor CURSOR FOR 
        	SELECT member_id, member_name, date_of_membership, email FROM members_backup;

      	 			DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = 1;

    OPEN member_cursor;

    read_loop: LOOP
        FETCH member_cursor INTO v_member_id, v_member_name, v_date_of_membership, v_email;
        IF done THEN
            LEAVE read_loop;
        END IF;

        SELECT 
            v_member_id AS MemberID,
            v_member_name AS Name,
            v_date_of_membership AS DateOfMembership,
            v_email AS Email;
    END LOOP;

    CLOSE member_cursor;
	END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `get_books_by_author` (IN `author_name` VARCHAR(255))   BEGIN
   
    DECLARE v_title VARCHAR(255);
    DECLARE done INT DEFAULT 0;

    DECLARE book_cursor CURSOR FOR
        SELECT title FROM books WHERE author = author_name;

  
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = 1;


    OPEN book_cursor;

  
    read_loop: LOOP
        FETCH book_cursor INTO v_title;
        IF done THEN
            LEAVE read_loop;
        END IF;

        SELECT v_title AS BookTitle;
    END LOOP;

    	CLOSE book_cursor;
	END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `get_books_by_autthor` (IN `author_name` VARCHAR(255))   BEGIN
        
        	SELECT * FROM books WHERE author = author_name;
            
        END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `get_book_price` (IN `bid` INT)   BEGIN 
        
        	SELECT price FROM books WHERE book_id = bid;
            
        END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `inert_new_book` ()   BEGIN 
        
        INSERT INTO books (book_id, title, author, publisher, year_of_publication, price) VALUES (9, 'Data strcutures', 'mark ben', 'MG Grill', 2017, 120);
        
        SELECT 'Book inserted successfully' AS Message;
        
        END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `show_book_variable` ()   BEGIN
        	
            DECLARE v_book_id int DEFAULT 1;
            DECLARE v_price int DEFAULT 200;
            
            SELECT v_book_id AS book_id, v_price AS Price;
            
        END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `total_books` ()   BEGIN 
        	
            DECLARE total int;
            
            SELECT COUNT(*) INTO total FROM books;
            
            SELECT total AS total_number_of_books;
            
        END$$

DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `authors`
--

CREATE TABLE `authors` (
  `author_id` int(11) NOT NULL,
  `first_name` varchar(255) DEFAULT NULL,
  `last_name` varchar(255) DEFAULT NULL,
  `country` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `authors`
--

INSERT INTO `authors` (`author_id`, `first_name`, `last_name`, `country`) VALUES
(1, 'Richa', 'Parmar', 'USA'),
(2, 'Purvi', 'Rathod', 'UK'),
(3, 'Vaibhav', 'Ahir', 'USA');

-- --------------------------------------------------------

--
-- Table structure for table `books`
--

CREATE TABLE `books` (
  `book_id` int(11) NOT NULL,
  `title` varchar(255) DEFAULT NULL,
  `author` varchar(255) DEFAULT NULL,
  `publisher` varchar(255) DEFAULT NULL,
  `year_of_publication` int(11) DEFAULT NULL,
  `price` int(11) DEFAULT NULL,
  `genre` varchar(255) DEFAULT NULL,
  `author_id` int(11) DEFAULT NULL,
  `last_modified` timestamp NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp()
) ;

--
-- Dumping data for table `books`
--

INSERT INTO `books` (`book_id`, `title`, `author`, `publisher`, `year_of_publication`, `price`, `genre`, `author_id`, `last_modified`) VALUES
(2, 'Operating System', 'Kavya', 'Wiley', 2018, 55, 'Operating System', 2, '2026-03-09 11:01:19'),
(3, 'Computer Network', 'Jiyan', 'Mithon', 2020, 80, 'Networking', 3, '2026-03-09 11:01:19'),
(6, 'database system', 'naveen', 'paerson', 2016, 150, NULL, 6, '2026-03-09 11:01:19'),
(7, 'maths', 'kapil', 'dave', 2018, 90, NULL, 7, '2026-03-09 11:01:19'),
(8, 'computer netwroks', 'tina', 'peri', 2015, 95, NULL, 8, '2026-03-09 11:01:19'),
(9, 'Data strcutures', 'mark ben', 'MG Grill', 2017, 120, NULL, NULL, '2026-03-09 11:44:40'),
(10, 'Computer Graphics', 'John Smith', 'Pearson', 2019, 150, NULL, NULL, '2026-03-09 11:44:16'),
(11, 'Python Basics', 'Alice', 'TechPub', 2022, 45, 'Programming', NULL, '2026-03-09 13:24:00'),
(12, 'Data Science 101', 'Bob', 'DataPress', 2021, 60, 'Data Science', NULL, '2026-03-09 13:24:00'),
(13, 'Machine Learning', 'Charlie', 'AI Books', 2023, 75, 'AI', NULL, '2026-03-09 13:24:00'),
(14, 'Python Basics', 'Alice', 'TechPub', 2022, 45, 'Programming', NULL, '2026-03-09 13:25:19'),
(15, 'Data Science 101', 'Bob', 'DataPress', 2021, 60, 'Data Science', NULL, '2026-03-09 13:25:19'),
(16, 'Machine Learning', 'Charlie', 'AI Books', 2023, 75, 'AI', NULL, '2026-03-09 13:25:19');

--
-- Triggers `books`
--
DELIMITER $$
CREATE TRIGGER `log_book_delete` AFTER DELETE ON `books` FOR EACH ROW BEGIN 
        
        	INSERT INTO log_changes (book_id, action_type) VALUES (old.book_id, 'DELETE');
            
        END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `update_last_modified` BEFORE UPDATE ON `books` FOR EACH ROW BEGIN 
        
        	SET new.last_modified = CURRENT_TIMESTAMP;
            
        END
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Stand-in structure for view `book_view`
-- (See below for the actual view)
--
CREATE TABLE `book_view` (
`title` varchar(255)
,`author` varchar(255)
,`price` int(11)
);

-- --------------------------------------------------------

--
-- Table structure for table `log_changes`
--

CREATE TABLE `log_changes` (
  `log_id` int(11) NOT NULL,
  `book_id` int(11) DEFAULT NULL,
  `action_type` varchar(255) DEFAULT NULL,
  `change_time` timestamp NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `log_changes`
--

INSERT INTO `log_changes` (`log_id`, `book_id`, `action_type`, `change_time`) VALUES
(1, 1, 'DELETE', '2026-03-09 11:33:12');

-- --------------------------------------------------------

--
-- Table structure for table `members_backup`
--

CREATE TABLE `members_backup` (
  `member_id` int(11) NOT NULL,
  `member_name` varchar(255) DEFAULT NULL,
  `date_of_membership` date DEFAULT NULL,
  `email` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `members_backup`
--

INSERT INTO `members_backup` (`member_id`, `member_name`, `date_of_membership`, `email`) VALUES
(1, 'Rahul Sharma', '2021-05-10', 'richa@gmail.com'),
(2, 'Purvi Rathod', '2020-03-15', 'purvi@gmail.com'),
(3, 'Jatin Rathod', '2023-03-20', 'jatin@gmail.com'),
(4, 'Vaibhav Ahir', '2023-04-05', 'vaibhav@gmail.com'),
(5, 'Hardik Vala', '2023-05-12', 'hardik@gmail.com'),
(6, 'Amit varma', '2023-05-10', 'amit@gmail.com'),
(0, 'Sneha Patel', '2026-03-09', 'sneha@gmail.com');

-- --------------------------------------------------------

--
-- Stand-in structure for view `members_before_2020`
-- (See below for the actual view)
--
CREATE TABLE `members_before_2020` (
`member_id` int(11)
,`member_name` varchar(255)
,`date_of_membership` date
,`email` varchar(100)
);

-- --------------------------------------------------------

--
-- Stand-in structure for view `members_before_2023`
-- (See below for the actual view)
--
CREATE TABLE `members_before_2023` (
`member_id` int(11)
,`member_name` varchar(255)
,`date_of_membership` date
,`email` varchar(100)
);

-- --------------------------------------------------------

--
-- Structure for view `book_view`
--
DROP TABLE IF EXISTS `book_view`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `book_view`  AS SELECT `books`.`title` AS `title`, `books`.`author` AS `author`, `books`.`price` AS `price` FROM `books` ;

-- --------------------------------------------------------

--
-- Structure for view `members_before_2020`
--
DROP TABLE IF EXISTS `members_before_2020`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `members_before_2020`  AS SELECT `members_backup`.`member_id` AS `member_id`, `members_backup`.`member_name` AS `member_name`, `members_backup`.`date_of_membership` AS `date_of_membership`, `members_backup`.`email` AS `email` FROM `members_backup` WHERE `members_backup`.`date_of_membership` < '2020-01-01' ;

-- --------------------------------------------------------

--
-- Structure for view `members_before_2023`
--
DROP TABLE IF EXISTS `members_before_2023`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `members_before_2023`  AS SELECT `members_backup`.`member_id` AS `member_id`, `members_backup`.`member_name` AS `member_name`, `members_backup`.`date_of_membership` AS `date_of_membership`, `members_backup`.`email` AS `email` FROM `members_backup` WHERE `members_backup`.`date_of_membership` < '2023-01-01' ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `authors`
--
ALTER TABLE `authors`
  ADD PRIMARY KEY (`author_id`);

--
-- Indexes for table `books`
--
ALTER TABLE `books`
  ADD PRIMARY KEY (`book_id`);

--
-- Indexes for table `log_changes`
--
ALTER TABLE `log_changes`
  ADD PRIMARY KEY (`log_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `books`
--
ALTER TABLE `books`
  MODIFY `book_id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `log_changes`
--
ALTER TABLE `log_changes`
  MODIFY `log_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
