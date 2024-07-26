#include<iostream>
using namespace std;

main()
{
	int a,b;
	
	cout<<"Enter 1st Number : ";
	cin>>a;
	
	cout<<"Enter 2nd Number : ";
	cin>>b;
	
	b = a+b;
	a = b-a;
	b = b-a;
	cout<<"\n\nAfter Swap : ";
	cout<<"\n\n1st Number Is : "<<a;
	cout<<"\n2nd Number Is : "<<b;	
	
}
