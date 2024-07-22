#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    string customerName;
    int accountNumber;
    string accountType;
    float balance;
public:
    Account(string name, int accNum, string accType, float bal) {
        customerName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = bal;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposit successful. Updated balance: " << balance << endl;
    }

    void displayBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

class Sav_Acct : public Account {
    float interestRate;
public:
    Sav_Acct(string name, int accNum, float bal, float rate = 2.5) 
        : Account(name, accNum, "Savings", bal), interestRate(rate) {}

    void computeAndDepositInterest() {
        float interest = (balance * interestRate) / 100;
        balance += interest;
        cout << "Interest deposited. Updated balance: " << balance << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Updated balance: " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void displayAccountInfo() {
        cout << "Account Type: Savings (No cheque book facility)" << endl;
        displayBalance();
    }
};

class Curr_Acct : public Account {
    float minimumBalance;
    float serviceCharge;
public:
    Curr_Acct(string name, int accNum, float bal, float minBal = 500, float charge = 50) 
        : Account(name, accNum, "Current", bal), minimumBalance(minBal), serviceCharge(charge) {}

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Updated balance: " << balance << endl;
            checkMinimumBalance();
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void checkMinimumBalance() {
        if (balance < minimumBalance) {
            balance -= serviceCharge;
            cout << "Balance below minimum. Service charge imposed. Updated balance: " << balance << endl;
        }
    }

    void displayAccountInfo() {
        cout << "Account Type: Current (Cheque book facility available)" << endl;
        displayBalance();
    }
};

int main() {
    string name;
    int accNum;
    float balance, amount;

    cout << "Enter customer name for Savings Account: ";
    getline(cin, name);
    cout << "Enter account number for Savings Account: ";
    cin >> accNum;
    cout << "Enter initial balance for Savings Account: ";
    cin >> balance;
    Sav_Acct savings(name, accNum, balance);

    cin.ignore();
    cout << "Enter customer name for Current Account: ";
    getline(cin, name);
    cout << "Enter account number for Current Account: ";
    cin >> accNum;
    cout << "Enter initial balance for Current Account: ";
    cin >> balance;
    Curr_Acct current(name, accNum, balance);

    cout << "\nSavings Account:" << endl;
    cout << "Enter amount to deposit in Savings Account: ";
    cin >> amount;
    savings.deposit(amount);
    savings.computeAndDepositInterest();
    cout << "Enter amount to withdraw from Savings Account: ";
    cin >> amount;
    savings.withdraw(amount);
    savings.displayAccountInfo();

    cout << "\nCurrent Account:" << endl;
    cout << "Enter amount to deposit in Current Account: ";
    cin >> amount;
    current.deposit(amount);
    cout << "Enter amount to withdraw from Current Account: ";
    cin >> amount;
    current.withdraw(amount);
    current.displayAccountInfo();

    return 0;
}

