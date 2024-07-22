/*3. Define a class to represent lecture details. Include the following members and the program
should handle at least details of 5 lecturer.
Data members: Name of the lecturer, Name of the subject, Name of course, Number of
lecturers, Data functions: To assign initial values to add a lecture detail to display name and lecture details.*/

#include<iostream>
using namespace std;

class lecture
{
	public:
		
	string lac[5],sub[5],cou[5];
	int num[5],i;
	
	void getdatadata(int i)
	{
		cout<<"\nEnter Name of The Lecturer : ";
		cin>>lac[i];
		cout<<"Enter Name of The Subject : ";
		cin>>sub[i];
		cout<<"Enter Name of The Course : ";
		cin>>cou[i];
		cout<<"Enter Number of The Lecturer : ";
		cin>>num[i];
	}
};

class display:public lecture
{
	public:
		
	int i;
	
	void printdatda(int i)
	{
		cout<<"\nLecturer Name : "<<lac[i];
		cout<<"\nSubject Name : "<<sub[i];
		cout<<"\nCourse Name : "<<cou[i];
		cout<<"\nNumber Of Lecturer : "<<num[i];
	}
};

main()
{
	display ds;
	
	int i;
	
	for(i=0;i<5;i++)
	{
		ds.getdatadata(i);
	}
	cout<<"\n\n----- Details of 5 Lecturer -----";
	for(i=0;i<5;i++)
	{
		cout<<"\n\n";
		cout<<"Lecturer :- "<<i+1<<"\n";
		ds.printdatda(i);
	}
}

