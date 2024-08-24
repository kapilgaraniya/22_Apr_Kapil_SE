use job;
select Department, max(Salary) Max_Salary from Employee group by Department order by Max_Salary;