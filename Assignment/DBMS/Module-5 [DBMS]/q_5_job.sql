use job;
select Department, sum(Salary) Total_Salary FROM Employee group by Department order by Total_Salary desc;
