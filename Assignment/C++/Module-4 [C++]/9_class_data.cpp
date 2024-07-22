/* 9. Create a class person having members name and age. Derive a class student having member percentage.
Derive another class teacher having member salary. Write necessary member function to initialize,
read and write data. Write also Main function (Multiple Inheritance)*/

#include<iostream>
using namespace std;

class student
{
	public:
		
	string snm;
	int sage,sper;
	
	void sgetdata()
	{
		cout<<"Enter Student Data :-\n";
		cout<<"Enter Name : ";
		cin>>snm;
		cout<<"Enter Age : ";
		cin>>sage;
		cout<<"Enter Percentage : ";
		cin>>sper;
	}
};

class teacher
{
	public:
		
	string tnm;
	int tage,tsal;
	
	void tgetdata()
	{
		cout<<"\nEnter Teacher Data :-\n";
		cout<<"Enter Name : ";
		cin>>tnm;
		cout<<"Enter Age : ";
		cin>>tage;
		cout<<"Enter Salary : ";
		cin>>tsal;
	}
};

class data:public student,public teacher
{
	public:
	
	void printdata()
	{
		cout<<"\n\n__________Student Data__________\n";
		cout<<"\nName : "<<snm;
		cout<<"\nAge : "<<sage;
		cout<<"\nPercentage : "<<sper<<"%";
		
		cout<<"\n\n__________Teacher Data__________\n";
		cout<<"\nName : "<<tnm;
		cout<<"\nAge : "<<tage;
		cout<<"\nSalary : "<<tsal;
	}
};
main()
{
	data d;
	
	d.sgetdata();
	d.tgetdata();
	d.printdata();
}
