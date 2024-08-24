create database shop;
use shop;

create table salesperson (sno int primary key, sname varchar(100), city varchar(100), comm decimal(3, 2));

insert into salesperson (sno, sname, city, comm) values 
(1001, 'peel', 'london', 0.12),
(1002, 'serres', 'san jose', 0.13),
(1004, 'motika', 'london', 0.11),
(1007, 'rafkin', 'barcelona', 0.15),
(1003, 'axelrod', 'new york', 0.10);

create table customer(cnm int primary key, cname varchar(100), city varchar(100), rating int, sno int,foreign key (sno) references salesperson(sno));

insert into customer (cnm, cname, city, rating, sno) values 
(201, 'hoffman', 'london', 100, 1001),
(202, 'giovanne', 'roe', 200, 1003),
(203, 'liu', 'san jose', 300, 1002),
(204, 'grass', 'barcelona', 100, 1007),
(206, 'clemens', 'london', 300, 1007),
(207, 'pereira', 'roe', 100, 1004);

select * from salesperson;
select * from customer;