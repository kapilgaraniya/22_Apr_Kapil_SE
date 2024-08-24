use data_table;

create table info(CustomerID int primary key auto_increment, FirstName varchar(20), LastName varchar(20), Email varchar(30) unique not null);

insert into info(FirstName, LastName, Email) values
("Kapil","Garaniya","kapil@gmail.com");

select * from info;

create table product(orderid int primary key auto_increment, orderdate varchar(20) not null, Email varchar(30) unique not null, foreign key product(Email) references info(Email));

insert into product(orderdate, Email) values
(01082024,"kapil@gmail.com");

select * from product;
