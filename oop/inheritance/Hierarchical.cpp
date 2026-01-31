#include <iostream>
using namespace std;

class Animal {
public:
    string name;
    Animal(string n) : name(n) {}

    void eat() {
        cout << name << " can eat." << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {}

    void bark() {
        cout << name << " is barking." << endl;
    }
};

class Cat : public Animal {
public:
    Cat(string n) : Animal(n) {}

    void meow() {
        cout << name << " is meowing." << endl;
    }
};

int main() {
    Dog d("Bruno");
    Cat c("Kitty");

    d.eat();
    d.bark();
    c.eat();
    c.meow();
 
}
