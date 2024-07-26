// 11 Write a program to swap the two numbers using friend function

#include <iostream>
using namespace std;

class swapping  {
    
    public:
    int a,b;
        void getdata()
		{
            cout<<"Enter two numbers for swapping :\n\n";
            cout<<"Enter Number of A : ";
            cin>>a;
            cout<<"Enter Number of B : ";
            cin>>b;
        }
        
    friend void swap(int x , int y);
    
    void printdata() 
	{
        cout<<"\n\nAfter swapping :\n\n";
        cout<<"A is = "<<a; 
        cout<<"\nB is = "<<b;
    }
};

void swap(swapping &no)
{
	int temp;
	
    temp = no.a;
    no.a = no.b;
    no.b = temp;
}

main()
{
    swapping sw;
    sw.getdata();
    swap(sw);
    sw.printdata();
}
