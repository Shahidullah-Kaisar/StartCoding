#include<iostream>
using namespace std;

class BankAccount {
    private:
        string accountHolder;
        double balance;

    public:
        void setInfo(string ah, double b){
            accountHolder = ah;
            balance = b;
        }

        string getName(){
            return accountHolder;
        }

        double getBalance(){
            return balance;
        }

        void deposite(double amount){
            if(amount > 0) {
                balance += amount;
                cout<<"Deposited: "<<amount<<endl;
            }
            else{
                cout<<"Invalid amount"<<endl;
            }
        }

        void withdraw(double amount){
            if(amount > 0 && amount <=balance){
                balance -=amount;
                cout<<"Withdrawn: "<<amount<<endl;
            }else{
                cout<<"Insufficient balance"<<endl;
            }
        }
};



int main(){
    BankAccount bc;
    
    bc.setInfo("Sajib", 1000);

    cout<<"Name: "<<bc.getName()<<",Balance: "<<bc.getBalance()<<endl;

    bc.deposite(500);
    cout<<"Total Balance: "<<bc.getBalance()<<endl;
}