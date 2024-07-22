/*10. Assume that a bank maintains two kinds of accounts for customer, one called as saving
account and other as current accounts provides Simple interest and withdraw facilities but no
cheque book facility. The current account provides cheque book facility but no interest. Current
account holders should maintain a minimum balance and if the balance falls below this level a
service charges is imposed Create a class account that stores customer name, account
number and type of account. From this derive classes curr_acc and sav_acct to make them
more specific to their requirements Include necessary member functions in order to achieve the
following tasks a. Accepts deposit from a customer and update balance. b. Display the balance.
c. Compute and deposit interest. d. Permit withdraws and updates the balance. e. Check for the
minimum balance, impose penalty, necessary and update the balance. */

#include<iostream>
using namespace std;

class saccount
{
	public:
		
	string snm;
	double sano, sabal;
	
	void scgetdata()
	{
		cout<<"-----Enter Sevings Account Data-----\n";
		cout<<"Enter Customer Name : ";
		cin>>snm;
		cout<<"Enter Customer Account no. : ";
		cin>>sano;
		cout<<"Enter Customer Initial Balance : ";
		cin>>sabal;
		
	}
	
};

class caccount
{
	public:
	
	
};

main()
{
	
}

