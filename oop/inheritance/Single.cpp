// #include<iostream>
// using namespace std;

// class Animal {
//     public:
//         void eat(){
//             cout<<"I can eat"<<endl;
//         }
// };

// class Cow : public Animal {
//     public:
//         void walk(){
//             cout<<"I can walk"<<endl;
//         }
// };


// int main (){
//     Cow c;
//     c.eat();// inherited from Animal
//     c.walk(); //own method
// }



#include <iostream>
using namespace std;

class Animal {
public:
    string name;
    int age;

    Animal(string n, int a) : name(n), age(a) {}

    void eat() {
        cout << name << " can eat." << endl;
    }
};

class Dog : public Animal {
public:
    string breed;

    Dog(string n, int a, string b) : Animal(n, a), breed(b) {}

    void bark() {
        cout << name << " is barking. Breed: " << breed << endl;
    }
};

int main() {
    Dog d("Buddy", 3, "Labrador");

    d.eat();
    d.bark();

    cout << "Age: " << d.age << " years" << endl;
 
}
