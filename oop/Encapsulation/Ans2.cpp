#include<bits/stdc++.h>
using namespace std;

class Book{
    private:
        string title;
        string author;
        int availableCopies;
        const int maxCopies = 100;

    public: 
        Book(string name, string authorName){
            title = name;
            author = authorName;
            availableCopies = maxCopies;
            
            cout<<"Book Name: "<<title<<endl;
            cout<<"Author Name: "<<author<<endl;
        }

        void borrowBook(int amount){
            if(amount > 0 && amount <= availableCopies){
                availableCopies -= amount;
            }else{
                cout<<"Not enough copies available!"<<endl;
            }
        }

        void returnBook(int amount){
            if(amount > 0 && (amount + availableCopies <= maxCopies)){
                availableCopies += amount;
            }else{
                cout<<"Invalid return amount!"<<endl;
            }
        }

        int getAvailableBook(){
            return availableCopies;
        }
};

int main(){
    Book b1("C++", "Kaisar");
    
    b1.borrowBook(5);
    cout<<"After Borrow total book: "<<b1.getAvailableBook()<<endl;

    b1.returnBook(3);
    cout<<"After Return total book: "<<b1.getAvailableBook()<<endl;

    Book b2("Python", "Sajib");
    
    b1.borrowBook(10);
    cout<<"After Borrow total book: "<<b1.getAvailableBook()<<endl;

    b1.returnBook(5);
    cout<<"After Return total book: "<<b1.getAvailableBook()<<endl;


}