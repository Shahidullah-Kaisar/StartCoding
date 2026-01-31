/*
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "I can eat" << endl;
    }
};

class Mammal : public Animal {
public:
    void walk() {
        cout << "I can walk" << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "I can bark" << endl;
    }
};

int main() {
    Dog d;
    d.eat();
    d.walk();
    d.bark();
    return 0;
}

*/


#include <iostream>
using namespace std;

class Animal {
public:
    int legs;
    Animal(int l) : legs(l) {}

    void showLegs() {
        cout << "I have " << legs << " legs." << endl;
    }
};

class Mammal : public Animal {
public:
    bool hasFur;
    Mammal(int l, bool fur) : Animal(l), hasFur(fur) {}

    void showFeatures() {
        cout << "Has fur: " << (hasFur ? "Yes" : "No") << endl;
    }
};

class Dog : public Mammal {
public:
    string name;
    Dog(string n, int l, bool fur) : Mammal(l, fur), name(n) {}

    void bark() {
        cout << name << " is barking." << endl;
    }
};

int main() {
    Dog d("Tommy", 4, true);
    d.showLegs();
    d.showFeatures();
    d.bark();
    return 0;
}
