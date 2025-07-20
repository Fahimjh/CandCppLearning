#include<iostream>
using namespace std;

struct node{
    struct node *prevPtr;
    int data;
    struct node *nextPtr;
};

int main(){
    node *head=nullptr, *tail;
    char choice='y';
    while(choice=='y'||choice=='Y'){
        cout<<"Enter value: ";
        node *temp =new node();
        cin>>temp->data;
        temp->nextPtr=nullptr;
        
        
        if(head==nullptr){
            head=temp;
            tail=temp;
        }
        else{
            temp->prevPtr=tail;
            tail->nextPtr=temp;
            tail=temp;
        }
        cout<<"Do you want to add more value? press y/Y t continue: ";
        cin>>choice;
    }

    cout<<head->prevPtr<<" <- "<<head->data<<" = "<<head<<" -> "<<head->nextPtr<<endl;
    node *current=head->nextPtr;
    while(current!=nullptr){
        cout<<current->prevPtr<<" <- "<<current->data<<" = "<<current<<" -> "<<current->nextPtr<<endl;
        current=current->nextPtr;
    }
}