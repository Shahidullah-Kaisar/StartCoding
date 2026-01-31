#include <iostream>
using namespace std;

class BankAccount {
public:
    string accountNumber;
    double balance;

    void deposit(double amount) {
        balance = balance + amount;
    }

    void withdraw(double amount) {
        balance = balance - amount;
    }
};

int main() {
    BankAccount acc;
    acc.accountNumber = "12345";
    acc.balance = -500;   // ❌ Direct access, invalid value

    cout << "Balance: " << acc.balance << endl;
    return 0;
}

/*
Problems in This Code

accountNumber and balance are public
Anyone can directly change balance (even negative)
No validation in deposit() or withdraw()
No data protection → Encapsulation broken

Your Task

Fix the code by:
Making variables private
Using getter and setter methods
Preventing negative balance
Allowing withdraw only if sufficient balance exists
*/