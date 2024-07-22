//5. Write a program to find the multiplication values and the cubic values using inline function.

#include<iostream>
using namespace std;

inline void multiplication(int a, int b)
{
	cout<<"Enter First Number For Multiplication : ";
	cin>>a;
	cout<<"Enter Second Number For Multiplication : ";
	cin>>b;
	
	cout<<"\nThe Multiplication is : "<<a*b;
}

inline void cubic(int n)
{
	cout<<"\n\nEnter Number to Find cube : ";
	cin>>n;
	
	cout<<"\nThe Cubic Value is : "<<n*n*n;
}

main()
{
	int n1,n2,n3;
	
	multiplication(n1,n2);
	cubic(n3);
}
