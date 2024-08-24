use job;

DELIMITER //

create PROCEDURE HSalary()
BEGIN
    select Department, max(Salary) Highest_Salary from Employee group by Department;
END //

DELIMITER ;
call HSalary();