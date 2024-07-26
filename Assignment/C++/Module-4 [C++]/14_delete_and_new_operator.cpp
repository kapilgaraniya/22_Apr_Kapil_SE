// 14. Create a example of use delete and new operator. 

#include<iostream>
using namespace std;

class SumCalculator
{
public:
	int num1;
    int num2;
    
    SumCalculator() : num1(0), num2(0) {}

    void inputValues() {
        cout <<"Enter the first number: ";
        cin >>num1;
        cout <<"Enter the second number: ";
        cin >>num2;
    }

    int calculateSum()
	{
        return num1 + num2;
    }

    void displayResult()
	{
        cout<<"\nThe Sum is : "<<calculateSum();
    }
};

main()
{
    SumCalculator calculator;

    calculator.inputValues();
    calculator.displayResult();
}


