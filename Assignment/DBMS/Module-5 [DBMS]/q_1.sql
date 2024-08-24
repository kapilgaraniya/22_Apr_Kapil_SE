create database stdata;

use stdata;

create table Student(Rollno integer primary key auto_increment,Name varchar(10),Branch varchar(30));

insert into Student (Name,Branch)values
('Jay','Computer Science'),
('Suhani','Electronic and Com '),
('Kriti','Electronic and Com ');

create table Exam(Rollno integer ,foreign key (Rollno) references Student (Rollno),S_code varchar(10),Marks integer,P_code varchar(10));

insert into Exam(Rollno,S_code,Marks,P_code)values
(1,'CS11',50,'CS'),
(1,'CS12',60,'CS'),
(2,'EC101',66,'EC'),
(2,'EC102',70,'EC'),
(3,'EC101',45,'EC'),
(3,'EC102',50,'EC');

select * from Student;
select * from exam;