create database shop;

use shop;

create table salesperson (sno int primary key, sname varchar(100), city varchar(100), comm decimal(3, 2));

insert into salesperson (sno, sname, city, comm) values 
(1001, 'peel', 'london', 0.12),
(1002, 'serres', 'san jose', 0.13),
(1004, 'motika', 'london', 0.11),
(1007, 'rafkin', 'barcelona', 0.15),
(1003, 'axelrod', 'new york', 0.10);
select * from salesperson;
