use job;
select employee.employee_id, employee.First_name, incentive.Incentive_amount 
from Employee LEFT JOIN incentive ON Employee.employee_id=incentive.employee_ref_id;