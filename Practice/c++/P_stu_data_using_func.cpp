#include<iostream>
using namespace std;
void data(int id, string nm)
{
	cout<<"\n\nID : "<<id;
	cout<<"\nName : "<<nm;
}
main()
{
	int stid[100],n,i;
	string stnm[100];
	
	cout<<"Enter Number Of Student You Want : ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"\n\nEnter Student ID : ";
		cin>>stid[i];
		cout<<"Enter Student Name : ";
		cin>>stnm[i];
	}
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		data(stid[i], stnm[i]);
	}
}
