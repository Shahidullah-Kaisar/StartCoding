#include <iostream>
using namespace std;

class Animal {
public:
    string type;
    Animal(string t) : type(t) {}

    void eat() {
        cout << type << " can eat." << endl;
    }
};

class Mammal : public Animal {
public:
    Mammal(string t) : Animal(t) {}

    void walk() {
        cout << type << " can walk." << endl;
    }
};

class Bird {
public:
    void fly() {
        cout << "I can fly." << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    string name;
    Bat(string n, string t) : Mammal(t), name(n) {}

    void hang() {
        cout << name << " hangs upside down." << endl;
    }
};

int main() {
    Bat b("Darkwing", "Bat");

    b.eat();
    b.walk();
    b.fly();
    b.hang();
    
    return 0;
}
