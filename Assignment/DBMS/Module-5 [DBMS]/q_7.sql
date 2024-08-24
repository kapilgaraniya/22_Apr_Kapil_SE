use data_table;

DELIMITER //
CREATE PROCEDURE getall()
BEGIN
    SELECT * FROM student;
END //
DELIMITER ;
CALL getall();