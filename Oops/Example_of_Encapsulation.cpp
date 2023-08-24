#include <iostream>
using namespace std;

class BankAccount
{
private:
    string account_number; // Private member
    double balance;        // Private member

public:
    BankAccount(string acc_num, double init_balance)
    {
        account_number = acc_num;
        balance = init_balance;
    }

    string getAccountNumber()
    {
        return account_number;
    }

    double getBalance()
    {
        return balance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
    }
};

int main()
{
    BankAccount account("12345", 1000);

    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Balance: " << account.getBalance() << endl;

    account.deposit(500);
    account.withdraw(200);

    cout << "Updated Balance: " << account.getBalance() << endl;

    return 0;
}
