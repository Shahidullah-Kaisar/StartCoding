#include<iostream>
using namespace std;

class Animal {
    public:
        string name;

        Animal(string n) : name(n){} //member initializer list syntax

        void myName(){
            cout<<name<<" is good animal"<<endl;
        }
};

class Cow {
    public:
        int age;

        Cow(int a) : age(a) {}

        void myAge(){
            cout<<"Cow's age is "<<age<<endl;
        }
};


class RedCow : public Animal, public Cow {
    public:
        string color;

        RedCow(string n, int a, string c) : Animal(n), Cow(a), color(c) {}

        void DetailsOfRedCow(){
            cout<<"Name "<<name<<" "<<"age "<<age<<" "<<"color "<<color<<endl;
        }
};


int main(){
    RedCow rc("Goru", 20, "Red");

    rc.myName();
    rc.myAge();
    rc.DetailsOfRedCow();

}

/*
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "I can eat" << endl;
    }
};

class Pet {
public:
    void friendly() {
        cout << "I am friendly" << endl;
    }
};

class Dog : public Animal, public Pet {
public:
    void bark() {
        cout << "I can bark" << endl;
    }
};

int main() {
    Dog d;
    d.eat();
    d.friendly();
    d.bark();
    return 0;
}

*/