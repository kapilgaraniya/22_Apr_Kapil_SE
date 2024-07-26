#include <iostream>
using namespace std;

main()
{    
    int divisor, dividend, quotient, r;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    r = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << r;
}
