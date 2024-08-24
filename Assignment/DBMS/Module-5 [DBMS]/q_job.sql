create database job;

use job;

CREATE TABLE Employee (
    Employee_id INT PRIMARY KEY AUTO_INCREMENT,
    First_name VARCHAR(50),
    Last_name VARCHAR(50),
    Salary INT,
    Joining_date DATETIME,
    Department VARCHAR(50)
);

INSERT INTO Employee (First_name, Last_name, Salary, Joining_date, Department) VALUES
('John', 'Abraham', 1000000, '2013-01-01 00:00:00', 'Banking'),
('Michael', 'Clarke', 800000, '2013-01-01 00:00:00', 'Insurance'),
('Roy', 'Thomas', 700000, '2013-02-01 00:00:00', 'Banking'),
('Tom', 'Jose', 600000, '2013-02-01 00:00:00', 'Insurance'),
('Jerry', 'Pinto', 650000, '2013-02-01 00:00:00', 'Insurance'),
('Philip', 'Mathew', 750000, '2013-01-01 00:00:00', 'Services'),
('TestName1', '123', 650000, '2013-01-01 00:00:00', 'Services'),
('TestName2', 'Lname%', 600000, '2013-02-01 00:00:00', 'Insurance');

SELECT * FROM employee;

CREATE TABLE Incentive (
    Employee_ref_id INT,
    Incentive_date DATE,
    Incentive_amount INT,
    FOREIGN KEY (Employee_ref_id) REFERENCES Employee(Employee_id)
);

INSERT INTO Incentive (Employee_ref_id, Incentive_date, Incentive_amount) VALUES
(1, '2013-02-01', 5000),
(2, '2013-02-01', 3000),
(3, '2013-01-01', 4000),
(1, '2013-01-01', 4500),
(2, '2013-01-01', 3500);

SELECT * FROM Incentive;