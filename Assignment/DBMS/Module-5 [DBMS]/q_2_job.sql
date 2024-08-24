use job;
select First_name, year(Joining_date)Joining_Year, monthname(Joining_date)Joining_Month, date(Joining_date) Joining_Date from Employee;