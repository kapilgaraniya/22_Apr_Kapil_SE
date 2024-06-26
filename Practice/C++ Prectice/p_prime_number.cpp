#include<iostream>
using namespace std;

main()
{
	int i,n;
	bool value=true; 
	
	cout<<"Enter Positive Integer : ";
	cin>>n;
	
	if(n==0 || n==1)
	{
		value= false;
	}
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			value=false;
			break;
		}
	}
	
	if(value)
	{
		cout<< n <<" = Is A Prime Number";
	}
	else
	{
		cout<< n <<" = Is A Not Prime Number";
	}	
}
