use data_table;

CREATE TABLE Users(UserID INTEGER PRIMARY KEY AUTO_INCREMENT, Username varchar(20) UNIQUE NOT NULL, Email varchar(20) UNIQUE NOT NULL);

insert into Users(Username, Email) values("ahir","ahir@gmail.com");

select * from Users;
