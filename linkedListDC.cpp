#include<iostream>
using namespace std;

struct node{
    struct node *prevPtr;
    string name;
    struct node *nextPtr;
};

int main(){
    node *head=nullptr, *tail;
    char choice='y';
    while(choice=='y'||choice=='Y'){
        cout<<"Enter name: ";
        node *temp=new node();
        cin.ignore();
        getline(cin,temp->name);
        if(head==nullptr){
            head=temp;
            tail=temp;
        }
        else{
            temp->prevPtr=tail;
            tail->nextPtr=temp;
            tail=temp;
        }
        cout<<"Do you want to enter more names? press y/Y to continue: ";
        cin>>choice;
    }
    tail->nextPtr=head;
    head->prevPtr=tail;

    cout<<head->prevPtr<<" <- "<<head->name<<" = "<<head<<" -> "<<head->nextPtr<<endl;
    node *current=head->nextPtr;
    while(current!=head){
        cout<<current->prevPtr<<" <- "<<current->name<<" = "<<current<<" -> "<<current->nextPtr<<endl;
        current=current->nextPtr;
    }
}