use data_table;

create table student (rollno int primary key auto_increment , firstname varchar(20), lastname varchar(20), age int);

insert into student(firstname, lastname, age) values
("Kapil","Garaniya",20);
create VIEW studentoverview as select rollno, firstname FROM student;

select * from studentoverview;
