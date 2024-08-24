USE job;
select first_name, Salary from Employee where Salary = (select MAX(Salary) from Employee where Salary < (select MAX(Salary) from Employee));