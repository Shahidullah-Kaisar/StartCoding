
❗ Problem:

Create a Base class Person with:

name
age

Create a Derived class Student with:

rollNumber
display() method that prints all info

👉 Use protected access for variables.

Skeleton Code (You complete it):

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
};

class Student : public Person {
private:
    int roll;

public:
    void setData(string n, int a, int r) {
        // complete this
    }

    void show() {
        // print all values
    }
};

int main() {
    Student s;
    s.setData("Rahim", 20, 101);
    s.show();
}
