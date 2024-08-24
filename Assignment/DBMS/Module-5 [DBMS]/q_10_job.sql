use job;

create view Employee_View as select First_name, Last_name, Salary from Employee;
select * from Employee_View;
