#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *nextPtr;
};

int main(){
    node *head=nullptr, *tail=nullptr;
    char choice='y';
    while(choice=='y'||choice=='Y'){
        cout<<"Press value to add data in the list: ";
        node *temp=new node();
        cin>>temp->data;
        temp->nextPtr=nullptr;
        cout<<"Want to add value in the list? pres y/Y to continue: ";
        cin>>choice;
        if(head==nullptr){
            head=temp;
            tail=temp;
        }
        else{
            tail->nextPtr=temp;
            tail=temp;
        }
    }

    tail->nextPtr=head;
    cout<<head->data<<" -> "<<head->nextPtr<<endl;
    node *current=head->nextPtr;
    while(current!=head){
        cout<<current->data<<" -> "<<current->nextPtr<<endl;
        current=current->nextPtr;
    }

}