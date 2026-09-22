#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;

public:
    // Function to set account details
    void setDetails(int accNo, double bal)
    {
        accountNumber = accNo;
        balance = bal;
    }

    // Deposit function
    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "Amount deposited: " << amount << endl;
    }

    // Withdrawal function
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Display account details
    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.setDetails(101, 5000);

    account.display();

    account.deposit(2000);
    account.withdraw(1500);

    cout << "\nAfter transactions:" << endl;
    account.display();

    return 0;
}