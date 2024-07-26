#include<iostream>
using namespace std;

main()
{
	char c;
	bool lower,upper;
	
	cout<<"Enter an Alphabet : ";
	cin>>c;
	cout<<"\n";
	
	lower = (c=='a' || c=='e' || c=='i' || c=='o'|| c=='u');
	upper = (c=='A' || c=='E' || c=='I' || c=='O'|| c=='U');
	
	if(!isalpha(c))
	{
		cout<<"Error..!  Non-alphabetic character..!";
	}
	else if(lower || upper)
	{
		cout<<c<<"  : Is Vowel..";
	}
	else{
		cout<<c<<" : Is Constant..";
	}
}
