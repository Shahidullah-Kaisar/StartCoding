//function overloading
/*
#include<iostream>
using namespace std;

class Calculator{
    public:
        int add(int x, int y){
            return x+y;
        }
        double add(double x, double y){
            return x+y;
        }
        int add(int x, int y, int z){
            return x+y+z;
        }
        
};

int main(){
    Calculator cal;

    cout<<cal.add(5,6)<<endl;
    cout<<cal.add(5.5,6.5)<<endl;
    cout<<cal.add(5,6,4)<<endl;
   
}
*/


//operator overloading

#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    // Constructor
    Complex(int r, int i) : real(r), imag(i) {} //Constructor Initializer List

    // '+' Operator Overloading
    Complex operator + (const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);

    // '+' অপারেটর ব্যবহার করে দুটি Complex নাম্বার যোগ
    Complex c3 = c1 + c2;

    cout << c3.real << " + i" << c3.imag << endl;

    return 0;
}

/*
কেন এটা দরকার?
সাধারণভাবে + অপারেটর primitive টাইপ (int, float) এর জন্য কাজ করে। কিন্তু user-defined টাইপ (যেমন Complex) এর জন্য C++ জানে না কী করতে হবে।
Operator Overloading-এর মাধ্যমে আমরা সেই আচরণ সংজ্ঞায়িত করতে পারি।
*/