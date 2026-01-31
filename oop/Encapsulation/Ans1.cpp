#include<bits/stdc++.h>
using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;

    public:

        BankAccount(string accNumber){
            accountNumber = accNumber;
            balance = 0.0;

            cout<<"Account Number: "<<accountNumber<<endl;
        }

        void deposit(double amount){
            if(amount > 0){
                balance = balance + amount;
            }else {
                cout << "Invalid deposit amount!" << endl;
            }
            
        }

        void withdraw(double amount){
            if(amount <= balance && amount > 0){
               balance = balance - amount; 
            }else{
                cout<<"Insufficient balance or invalid amount!";
            }
            
        }
        double getBalance(){
            return balance;
        }
};
int main(){
    BankAccount acc("251");
    // acc.deposite(400.50);
    cout<<"Total Balance: "<<acc.getBalance()<<endl;

    // acc.withdraw(200);
    cout<<"After withdraw Total Balance: "<<acc.getBalance()<<endl;
}