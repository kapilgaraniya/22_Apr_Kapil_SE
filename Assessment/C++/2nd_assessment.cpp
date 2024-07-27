/*• Create a Project to demonstrate Simple Food Ordering Project which will help to order
foods . The Project should contain all the necessary requirements i.e need to use
conditional Statements, Loops, Function, SwitchCase and also A Program should use
the concept of OOP.*/

#include<iostream>
using namespace std;

class food
{
	public:
	
	void bill()
	{
		int choice, quantity, amount, tbill; 
    	char ch;

// do while loop to repeat the menu's process..
    do 
	{
    	cout<<"\n\n-------------Menu-----------------";
        cout<<"\n1.Pizza       Rs.250";
        cout<<"\n2.Burger      Rs.200";
        cout<<"\n3.Sandwich    Rs.150";
        cout<<"\n4.Rolls       Rs.100";
        cout<<"\n5.Biryani     Rs.50";
        cout<<"\nPlease Enter your choice :";
        cin>>choice;
        
        switch(choice)
		{
            case 1:
                cout<<"You have selected pizza.\n";
                cout<<"\nEnter the quantity:";
                cin>>quantity;
                amount = 250;
                cout<<"\nAmount : "<<amount;
				amount *= quantity;
                tbill += amount;  
                cout<<"\nTotal Amount is = "<<tbill;
                break;
            case 2:
                cout<<"You have selected Burger.\n";
                cout<<"\nEnter the quantity:";
                cin>>quantity; 
                amount = 200;
                cout<<"\nAmount : "<<amount;
				amount *= quantity;
                tbill += amount; 
                cout<<"\nTotal Amount is = "<<tbill;

                break;
            case 3:
                cout<<"You have selected Sandwich.\n";
                cout<<"\nEnter the quantity:";
                cin>>quantity; 
                amount = 150;
                cout<<"\nAmount : "<<amount;
				amount *= quantity;
                tbill += amount;  
                cout<<"\nTotal Amount is = "<<tbill;
                break;
            case 4:
                cout<<"You have selected Rolls.\n";
                cout<<"\nEnter the quantity:";
                cin>>quantity; 
                amount = 100;
                cout<<"\nAmount : "<<amount;
				amount *= quantity;
                tbill += amount;  
                cout<<"\nTotal Amount is = "<<tbill;
                break;
             case 5:
                cout<<"You have selected Biryani.\n";
                cout<<"\nEnter the quantity:";
                cin>>quantity;
                amount = 50;
                cout<<"\nAmount : "<<amount;
				amount *= quantity; 
                tbill += amount; 
                cout<<"\nTotal Amount is = "<<tbill;
                break;
            default:
                cout<<"\nInvalid Input.\n";
                break;
        } 
        cout<<"\nWould you like to order anything else? (y / n) : ";
    	cin>>ch;
    }
	while (ch == 'y' || ch == 'Y');
    cout<<"\n\nYour order will be delivered in 40 menutes\n";
	cout<<"Thank you for ordering from Tops Tech Fast Food\n";
    cout<<"\nYour total bill is : "<<tbill;
	}
};

main() 
{
	string nm;
	
	cout<<"-----Tops Tech. Fast Food-----";
	cout<<"\n\nEnter Your Name : ";
	cin>>nm;
	cout<<"Hello, "<<nm;
	cout<<"\n\nWhat Would You like To Order ?";
    food f;
    f.bill();
    
}
