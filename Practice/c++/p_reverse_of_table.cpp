#include<iostream>
using namespace std;

main()
{
	int i,n;
	
	cout<<"Enter Number For Table : ";
	cin>>n;
	
	cout<<"\n";
	
	for(i=10;i>=1;i--)
	{
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
	}
}
