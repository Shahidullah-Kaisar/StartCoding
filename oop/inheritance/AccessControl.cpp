#include <iostream>
using namespace std;

class Base {
public:
    int a;
protected:
    int b;
private:
    int c;

public:
    Base() {
        a = 10;
        b = 20;
        c = 30;
    }

    void showBase() {
        cout << "Base class members:" << endl;
        cout << "a = " << a << endl;      // public
        cout << "b = " << b << endl;      // protected
        cout << "c = " << c << endl;      // private
    }
};

class Derived : public Base {
public:
    void showDerived() {
        cout << "Derived class accessing members:" << endl;
        cout << "a = " << a << endl;  // accessible (public)
        cout << "b = " << b << endl;  // accessible (protected)
        // cout << "c = " << c << endl; // NOT accessible (private) → Uncommenting this will cause error
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    baseObj.showBase();

    cout << endl;

    derivedObj.showDerived();

    cout << endl;
    cout << "Accessing Base class members from main:" << endl;
    cout << "baseObj.a = " << baseObj.a << endl;    // public → accessible
    // cout << baseObj.b << endl;   // protected → not accessible
    // cout << baseObj.c << endl;   // private → not accessible

    return 0;
}
