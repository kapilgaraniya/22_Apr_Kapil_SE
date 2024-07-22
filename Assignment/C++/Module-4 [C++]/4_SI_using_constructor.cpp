/* Q4. Write a program of find the simple interest using Defoult constructor with dynamic initialization.
Make constructor like Interest (int principal, int year, float rate = 2.5)*/

#include<iostream>
using namespace std;

class interest
{
	public:
	
	interest(int p, int y, float r, float si)
	{		
		cout<<"\n\nPrincipal Amount : "<<p;
		cout<<"\nYears : "<<y;
    	cout<<"\nRate : "<<r<<"%";
    	cout<<"\nSimple Interest : "<<si;
	}
};

main()
{
	int principal, year;
	float rate = 2.5,si;
	
    cout<<"Enter Principal Amount : ";
    cin>>principal;
    cout<<"Enter Years : ";
    cin>>year;
    cout<<"Enter Simple Interest : ";
    cin>>rate;
    
    si = (principal*year*rate)/100;
    
    interest(principal, year, rate, si);
}
