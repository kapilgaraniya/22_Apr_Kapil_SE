/*2.Create table given below
ANS >>*/

create database data_table;

use data_table;

create table persondata(id integer primary key auto_increment, FirstName varchar(10),LastName varchar(10),Address varchar(30),City varchar(10),age integer);

insert into persondata(FirstName,LastName,Address,City,Age)values
('Mickey','Mouse','123 Fantasy Way ','Anaheim',73),
('Bat','Man','321 Cavern Ave','Gotham',54),
('Wonder','Women','987 Truth Way','Paradise',39),
('Donald','Duck','555 Quack Street','Mallard',65),
('Bugs','Bunny','567 Carrot Street','Rascal',58),
('Wiley','Coyote','999 Acme Way','Canyon',61),
('Cat','Woman','234 Purrfect Street','Hairball',32),
('Twenty','Bird','543','Itotitaw',28);

select * from persondata;