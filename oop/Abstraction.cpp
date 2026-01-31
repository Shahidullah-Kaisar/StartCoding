/*
#include <iostream>
using namespace std;

// Abstract Class
class Shape {
public:
    virtual void draw() = 0;  // Pure Virtual Function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();

    s1->draw();
    s2->draw();

    delete s1;
    delete s2;

    return 0;
}

*/

/*
✅ Explanation:

Shape ক্লাস abstract, কারণ এতে pure virtual function আছে → virtual void draw() = 0;

আমরা Shape এর object বানাতে পারব না pure virtual function or abstract class tai.. 

শুধু Circle আর Rectangle নিজেদের মতো করে draw() implement করেছে।

main এ আমরা pointer দিয়ে access করছি → user শুধু draw() জানছে, ভিতরের calculation জানছে না।
*/


#include<iostream>
using namespace std;

// Abstract class (Interface-এর মতো)
class Account {
public:
    virtual void setInfo(string name, double balance) = 0;
    virtual string getName() = 0;
    virtual double getBalance() = 0;
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    
    virtual ~Account() {} // Virtual destructor
};

// Concrete class implementing the interface
class BankAccount : public Account {
private:
    string accountHolder;
    double balance;

public:
    void setInfo(string name, double b) override {
        accountHolder = name;
        balance = b;
    }

    string getName() override {
        return accountHolder;
    }

    double getBalance() override {
        return balance;
    }

    void deposit(double amount) override {
        if(amount > 0) {
            balance += amount;
            cout<<"Deposited: "<<amount<<endl;
        } else {
            cout<<"Invalid amount"<<endl;
        }
    }

    void withdraw(double amount) override {
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout<<"Withdrawn: "<<amount<<endl;
        } else {
            cout<<"Insufficient balance"<<endl;
        }
    }
};

int main() {
    Account* acc = new BankAccount(); // Using abstraction
    acc->setInfo("Sajib", 1000);

    cout<<"Name: "<<acc->getName()<<", Balance: "<<acc->getBalance()<<endl;

    acc->deposit(500);
    cout<<"Total Balance: "<<acc->getBalance()<<endl;

    acc->withdraw(700);
    cout<<"Remaining Balance: "<<acc->getBalance()<<endl;

    delete acc;
    return 0;
}
