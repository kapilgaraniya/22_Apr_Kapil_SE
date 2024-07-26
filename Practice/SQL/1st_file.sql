CREATE table studinfo(id INTEGER PRIMARY KEY AUTOINCREMENT, name text, subject TEXT);

INSERT INTO studinfo(name, subject) VALUES("kapil","kotlin");

INSERT INTO studinfo(name, subject) VALUES("uday","python"),("kush","php"),("rahul","java");

UPDATE studinfo SET subject="ios" WHERE id=3;

UPDATE studinfo set name="joy" WHERE id=4;

DELETE FROM studinfo where id=2;

DELETE FROM studinfo where id=4;

/* My Prectice */

UPDATE studinfo SET id=2 WHERE id=3;

INSERT INTO studinfo(name, subject) VALUES("rahul","java"), ("chintan","python"), ("hardik","flutter");