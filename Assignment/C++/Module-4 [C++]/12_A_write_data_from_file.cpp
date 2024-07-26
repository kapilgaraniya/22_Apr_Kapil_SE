//12. Write a program write data in to file 

#include<iostream>
#include<fstream>
using namespace std;

main()
{
	int id;
	string nm,ct;

		cout<<"Enter ID : ";
		cin>>id;
		cout<<"Enter Name : ";
		cin>>nm;
		cout<<"Enter City : ";
		cin>>ct;
	
		ofstream file("data.txt");
	
		file<<"ID : "<<id<<endl;
		file<<"Name : "<<nm<<endl;
		file<<"City : "<<ct<<endl;
	
	cout<<"\nData Inserted successfully...";
}
