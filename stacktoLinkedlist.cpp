#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> &s){
    cout<<"stack size ="<<s.size()<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<"stack size ="<<s.size()<<endl;
}

struct node{
    int data;
    struct node *nextPtr;
};

int main(){
    stack<int> s;
    int length=0;
    char choice='y';
    node *head=nullptr, *tail;
    node *prevNode;
    while(choice=='y'|| choice=='Y'){
        cout<<"Enter value: ";
        int val;
        cin>>val;
        s.push(val);
        node *newNode = new node();
        length++;
        newNode->data=val;

        if(head==nullptr){
            tail=newNode;
            head=newNode;
            prevNode=tail;
            newNode->nextPtr=nullptr;
        }
        else{
            head=newNode;
            head->nextPtr=prevNode;
            prevNode=newNode;
        }
        cout<<"Press y/Y to insert more value: ";
        cin>>choice;
    }
    
    node *temp=head;
    while (temp != nullptr){
        cout << temp->data << " -> " << temp->nextPtr << endl;
        temp = temp->nextPtr;
    }
    cout<<"Length of list: "<<length<<endl;

    display(s);
    cout<<s.empty()<<endl;

    temp=head;
    while (temp != nullptr){
        cout << temp->data << " -> " << temp->nextPtr << endl;
        temp = temp->nextPtr;
    }
    cout<<"Length of list: "<<length<<endl;
    
    temp=head;
    while (temp != nullptr){
        prevNode=temp;
        temp = temp->nextPtr;
        delete prevNode;
        length--;
    }
    cout<<"Length of list: "<<length<<endl;

}