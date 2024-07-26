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
	double sno,sbal,sdepo,swith;
	float interest;
	
	void scdata()
	{	
		cout<<"Enter Sevings Account Data :-\n\n";
		cout<<"Enter Customer Name : ";
		cin>>snm;
		cout<<"Enter Customer Account no. : ";
		cin>>sno;
		cout<<"Enter Customer Initial Balance : ";
		cin>>sbal;	
		
		cout<<"\nEnter Amount to Deposit in Savings Account : ";
		cin>>sdepo;
		
		sbal += sdepo;
		interest = (sbal*2.5)/100;
        sbal += interest;
		cout<<"\nDeposit successful...\nAdded Interest & Updated Balance : " <<sbal<<endl;
		
		cout<<"\nEnter Amount to Withdraw From Savings Account : ";
		cin>>swith;
		
		if(swith <= sbal)
		{
            sbal -= swith;
            cout << "\nWithdrawal successful...\nYour Updated balance: " <<sbal<<endl;
        }
		else{
            cout << "\nInsufficient Balance !!!"<<endl;
        }
        
        cout<<"Account Type : Savings (No Cheque Book Facility)\n";
	}
		
};

class caccount:public saccount
{
	public:
		
	string cnm;
	double cno,cbal,cdepo,cwith;
	float interest;
	
	void ccdata()
	{
		cout<<"____________________________________________\n\n";

		cout<<"Enter Current Account Data :-\n\n";
		cout<<"Enter Customer Name : ";
		cin>>cnm;
		cout<<"Enter Customer Account no. : ";
		cin>>cno;
		cout<<"Enter Customer Initial Balance : ";
		cin>>cbal;	
		
		cout<<"\nEnter Amount to Deposit in Current Account : ";
		cin>>cdepo;
		
		cbal += cdepo;
		
		cout<<"\nDeposit successful...\nYour Updated Balance : " <<cbal<<endl;
		
		cout<<"\nEnter Amount to Withdraw From Savings Account : ";
		cin>>cwith;
		
		if(cwith <= cbal)
		{
            cbal -= cwith;
            cout << "\nWithdrawal successful...\nYour Updated balance: " <<cbal<<endl;
        }
		else{
            cout << "\nInsufficient Balance !!!"<<endl;
        }
        
        cout<<"Account Type : Current (Cheque Book Facility Available)\n";
	}

};

main()
{
	caccount ca;
	
	ca.scdata();
	ca.ccdata();
}

