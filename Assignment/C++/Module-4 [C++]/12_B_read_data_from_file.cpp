//12. Write a program to read data in to file 

#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ifstream file("data.txt");
	
	string str;
	
	while(getline(file,str))
	{
		cout<<str<<endl;
	}
}
