#include<iostream>
using namespace std;

class Base{
    public:
        virtual void display(){
            cout<<"This is base class"<<endl;
        }

        virtual ~Base() {  // Virtual destructor for safe polymorphic deletion----eta use korbo tokhn jodi --new-- use kori..
            cout << "Base destructor called" << endl;
        }
};

class Derived : public Base{
    public:
        void display() override{
            cout<<"This is derived class"<<endl;
        }
};

int main(){
    Base *basePtr = new Derived();

    basePtr ->display();

    delete basePtr;

    // Base *basePtr; //stack object

    // Derived derivedObj;

    // basePtr = &derivedObj;

    // basePtr -> display();
}

/*

| Feature        | `new Derived()`                  | Stack object (`Derived d;`) |
| -------------- | -------------------------------- | --------------------------- |
| Memory         | Heap                             | Stack                       |
| Lifetime       | Programmer controlled (`delete`) | Scope controlled            |
| Polymorphism   | Works (pointer)                  | Works (pointer)             |
| Delete needed? | Yes                              | No                          |



যখন Base pointer দিয়ে Derived object delete করা হয়, তখন Base destructor virtual না হলে Derived class cleanup হবে না।

তাই, polymorphic classes-এ Base destructor সবসময় virtual হতে হবে।

*/