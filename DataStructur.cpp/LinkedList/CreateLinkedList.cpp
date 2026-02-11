#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head=tail=NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val); //dynamic
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            newNode -> next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(int val){
        if(head == NULL){
            cout<<"List is Empty";
            return;
        }
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;

        delete temp;
    }

    void pop_back(int val){
        if(head == NULL){
            cout<<"List is Empty";
            return;
        }

        if (head == tail) { // বা head->next == NULL
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;

        while(temp->next !=tail){
            temp=temp->next;
        }
        
        temp->next=NULL;
        
        delete tail;
        tail=temp;
    }

    void insert(int val, int pos){
        if(pos<0){
            cout<<"Invalid Position"<<endl;
            return;
        }

        if(pos==0){
            push_front(val);
            return;
        }

        Node* temp = head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"Invalid Position"<<endl;
            }
            temp=temp->next;
        }

        Node* newNode = new Node(val);
        newNode -> next = temp -> next;
        temp->next = newNode;
    }

    int search(int key){
        Node* temp = head;
        int idx=0;

        while (temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
        
    }

    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);

    ll.push_back(5);

    ll.pop_front(4);
    ll.pop_back(5);

    ll.insert(50,2);

    ll.printList();

    cout<<"Index: "<<ll.search(1)<<endl;

}