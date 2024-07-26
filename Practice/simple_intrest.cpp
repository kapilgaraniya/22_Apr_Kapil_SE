#include <iostream>
using namespace std;

class Interest
{
private:
    int principal;
    int year;
    float rate;

public:
    // Default constructor with dynamic initialization
    Interest(int p = 0, int y = 0, float r = 2.5)
    {
        principal = p;
        year = y;
        rate = r;
    }

    // Calculate and display simple interest
    void calculateInterest()
    {
        float simpleInterest = (principal * rate * year) / 100;
        cout << "Principal amount: " << principal << endl;
        cout << "Years: " << year << endl;
        cout << "Rate: " << rate << "%" << endl;
        cout << "Simple Interest: " << simpleInterest << endl;
    }
};

int main()
{
    int principalAmount, numberOfYears;
    float interestRate;

    cout << "Enter principal amount: ";
    cin >> principalAmount;

    cout << "Enter number of years: ";
    cin >> numberOfYears;

    cout << "Enter interest rate (in percentage): ";
    cin >> interestRate;

    // Create an object of Interest class
    Interest myInterest(principalAmount, numberOfYears, interestRate);

    // Calculate and display simple interest
    myInterest.calculateInterest();

    return 0;
}

