use job;
select Employee.First_name, Incentive.Incentive_amount from Employee join Incentive
on Employee.Employee_id = Incentive.Employee_ref_id where Incentive_amount>3000;