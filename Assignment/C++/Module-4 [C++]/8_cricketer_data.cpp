/*Q8. Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data
member of batsman. Total runs, Average runs and best performance. Member functions
input data, calculate average runs, Display data. (Single Inheritance)*/

#include<iostream>
using namespace std;

class cricketer
{
	public:
	
	string bnm;
	int match, tr, perfo;
	
	void getdata()
	{
		cout<<"Enter Batsman Name : ";
		cin>>bnm;
		cout<<"Enter No. of All Matches : ";
		cin>>match;
		cout<<"Enter Total Runs : ";
		cin>>tr;
		cout<<"Enter Run of Best Performance : ";
		cin>>perfo;
	}
};

class batsman:public cricketer
{
	public:
	
	void printdata()
	{
		int aruns;
		
		aruns = tr / match;
		
		cout<<"\n\n__________Data of Batsman__________\n\n";
		cout<<"Batsman Name : "<<bnm;
		cout<<"\nNo. of All Matches : "<<match;
		cout<<"\nTotal Runs : "<<tr;
		cout<<"\nRun of Best Performance : "<<perfo;
		cout<<"\nBatsman's Average Runs : "<<aruns;
	}
};

main()
{
	batsman bat;
	
	bat.getdata();
	bat.printdata();
}
