/*2. Define a class to represent a bank account. Include the following members: Data Member: -
Name of the depositor - Account Number - Type of Account - Balance amount in the
account Member Functions - To assign values - To deposited an amount - To withdraw an
amount after checking balance - To display name and balance.*/

#include<iostream>
using namespace std;

class account
{
	public:
	
	int anum;
	string atype, hname;
	
	void agetdata()
	{
		cout<<"Enter Account Holder Name : ";
		cin>>hname;
		
		cout<<"Enter Account Number : ";
		cin>>anum;
		
		cout<<"Enter Account Type : ";
		cin>>atype;
	}
};

class depositor:public account
{
	public:
	
	int depo;
	
	void dgetdata()
	{
		cout<<"Enter Your Deposit amount : ";
		cin>>depo;
	}
};

class withdraw:public depositor
{
	public:
	
	int wit;
	
	void wgetdata()
	{
		cout<<"Enter Your Withdraw Amount : ";
		cin>>wit;
		wit = depo - wit;
	}
	
};

class display:public withdraw
{
	public:
		
	void printdata()
	{
		cout<<"\nName of The Depositor : "<<hname;
		cout<<"\nAccount Number : "<<anum;
		cout<<"\nAccount Type : "<<atype;
		cout<<"\nAccount balance : "<<wit;
	}
};
main()
{
	display dis;
	
	dis.agetdata();
	dis.dgetdata();
	dis.wgetdata();
	dis.printdata();
}
