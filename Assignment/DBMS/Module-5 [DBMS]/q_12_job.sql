use job;

create table Employee_backup(id int primary key auto_increment,
First_name varchar(10),
Last_name varchar(10),
Salary int,
joining_date datetime,
Department varchar(20));

delimiter //
create trigger Emplog
after insert
on Employee
for each row
begin
insert into Employee_backup(First_name,Last_name,Salary,joining_date,Department)values
(new.First_name,new.Last_name,new.Salary,new.joining_date,new.Department);
end //
delimiter ;

insert into Employee(First_name,Last_name,Salary,joining_date,Department)values
('Kapil','Garaniya',1000999,'2012-01-01 01:00:00','Banking');

select * from Employee;
select * from Employee_backup;