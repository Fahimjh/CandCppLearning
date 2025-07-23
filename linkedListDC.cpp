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
    int length=0;
    
    while(choice=='y'||choice=='Y'){
        cout<<"Enter name: ";
        
        node *temp = new node();
        temp->nextPtr = nullptr;
        temp->prevPtr = nullptr;
        length++;

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
        cin.ignore();
    }

    tail->nextPtr=head;
    head->prevPtr=tail;

    
    cout<<head->prevPtr<<" <- "<<head->name<<" = "<<head<<" -> "<<head->nextPtr<<endl;
    node *current=head->nextPtr;
    while(current!=head){
        cout<<current->prevPtr<<" <- "<<current->name<<" = "<<current<<" -> "<<current->nextPtr<<endl;
        current=current->nextPtr;
    }
    cout<<"list legth: "<<length<<endl;

    choice='y';
    while(choice=='y'||choice=='Y'){
        int pos;
        cout<<"Enter position you want to insert: ";
        cin>>pos;

        if(pos==1){//insertion at first
            node *newNode=new node();
            length++;
            cout<<"Enter name: ";
            cin.ignore();
            getline(cin,newNode->name);
            newNode->nextPtr=head;
            head->prevPtr=newNode;
            newNode->prevPtr=tail;
            tail->nextPtr=newNode;
            head=newNode;
        }

        else if(pos>1 && pos <=length){//insertion in middle
            int i=1;
            node *curr=head;
            node *temp=head;
            while(i<pos){
                temp=curr;
                curr=curr->nextPtr;
                i++;
            }
            node *newNode=new node();
            length++;
            cout<<"Enter name: ";
            cin.ignore();
            getline(cin,newNode->name);
            newNode->prevPtr=temp;
            newNode->nextPtr=curr;
            curr->prevPtr=newNode;
            temp->nextPtr=newNode;
        }

        else if(pos == length+1){//insertion at last
            node *newNode=new node();
            length++;
            cout<<"Enter name: ";
            cin.ignore();
            getline(cin,newNode->name);
            newNode->prevPtr=tail;
            tail->nextPtr=newNode;
            newNode->nextPtr=head;
            head->prevPtr=newNode;
            tail=newNode;
        }
        else{
            cout<<"Invalid position."<<endl;
        }
        
        cout<<"list legth: "<<length<<endl;
        cout<<"Do you want to insert more values? press y/Y to confirm: ";
        cin>>choice;

    }
    cout<<head->prevPtr<<" <- "<<head->name<<" = "<<head<<" -> "<<head->nextPtr<<endl;
    current=head->nextPtr;
    while(current!=head){
        cout<<current->prevPtr<<" <- "<<current->name<<" = "<<current<<" -> "<<current->nextPtr<<endl;
        current=current->nextPtr;
    }
    cout<<"list legth: "<<length<<endl;
}