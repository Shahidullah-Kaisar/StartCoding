#include<bits/stdc++.h>
using namespace std;

class Person{
    protected:
        string name;
        int age;
};

class Student : public Person{
    private:
        int roll;

    public:
        Student(string n, int a, int r){
            name=n;
            age=a;
            roll=r;
        }
        void getInfo() const{
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Roll: "<<roll<<endl;
        }
};

int main(){
    Student s1("Kaisar", 23, 2045);
    
    s1.getInfo();
}