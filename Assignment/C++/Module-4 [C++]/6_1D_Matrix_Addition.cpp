// 6. Write a Program of Two 1D Matrix Addition using Operator Overloading 

#include<iostream>
using namespace std;

class matrix
{
	public:
	int fm,sm;
	
	void two()
	{
		cout<<"Enter Value : ";
		cin>>fm;
	}
	
	void three()
	{
		cout<<"Enter Vlaue : ";
		cin>>sm;
	}
	
};

main()
{ 
	matrix m;
	int i,size;
	
	cout<<"Enter Size of The Matrix : ";
	cin>>size;
	cout<<"------------------------------\n";
	
	cout<<"Enter First Matrix Values : ";
	
	for(i=0;i<size;i++)
	{
		cout<<"\n"<<i+1<<". ";
		m.two();
	}
	
	cout<<"-------------------------------\n\n";
	
	cout<<"Enter Secound Matrix Vlaues : ";
	
	for(i=0;i<size;i++)
	{
		cout<<"\n"<<i+1<<". ";
		m.three();
	}
}

