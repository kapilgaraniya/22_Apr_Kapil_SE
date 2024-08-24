CREATE TABLE Exam ( Rollno INTEGER, S_code TEXT, Marks INTEGER, P_code TEXT, FOREIGN KEY (Rollno) REFERENCES student(Rollno));

INSERT INTO Exam(Rollno,S_code,Marks,P_code)values
(1,'CS11',50,'CS'),
(1,'CS12',60,'CS'),
(2,'EC101',66,'EC'),
(2,'EC102',70,'EC'),
(3,'EC101',45,'EC'),
(3,'EC102',50,'EC');

select * from Student;
select * from exam;