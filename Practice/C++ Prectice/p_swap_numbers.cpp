#include<iostream>
using namespace std;

main()
{
	int a,b,c;
	
	cout<<"Enter Number of A : ";
	cin>>a;
	
	cout<<"Enter Number of B : ";
	cin>>b;
	
	c = a;
	a = b;
	b = c;
	
	cout<<"\n\nNumber A is : "<<a;
	cout<<"\nNumber B is : "<<b;
}
