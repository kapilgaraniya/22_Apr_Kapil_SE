#include<iostream>
using namespace std;

main()
{
	int a,b,ch;
	
	cout<<"__________MENU__________\n\n";
	cout<<"1 = Addition";
	cout<<"\n2 = Substrection";
	cout<<"\n3 = Multiplication";
	cout<<"\n4 = Division";
	
	cout<<"\n\nEnter Your Choise : ";
	cin>>ch;
	
	cout<<"\nEnter First Number : ";
	cin>>a;
	cout<<"Enter Second Number : ";
	cin>>b;
	
	switch(ch)
	{
		case 1:
		cout<<"\nAddition is : "<<a+b;
		break;
		
		case 2:
		cout<<"\nSubstrection is : "<<a-b;
		break;
		
		case 3:
		cout<<"\nMultiplication is : "<<a*b;
		break;
		
		case 4:
		cout<<"\nDivision is : "<<a/b;
		break;
		
		default :
			cout<<"\nPLZ... Enter Valid Choice..!";
	}
}
