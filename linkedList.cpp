#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *nextPtr;
};

int main()
{
    node *head = nullptr, *tail = nullptr;
    char choice = 'y';
    while (choice == 'y' || choice == 'Y'){
        cout << "Press value to add data in the list: ";
        node *temp = new node();
        cin >> temp->data;
        temp->nextPtr = nullptr;
        cout << "Want to add value in the list? pres y/Y to continue: ";
        cin >> choice;
        if (head == nullptr){
            head = temp;
            tail = temp;
        }
        else{
            tail->nextPtr = temp;
            tail = temp;
        }
    }

    int length = 0;
    node *temp = head;
    while (temp != nullptr){
        cout << temp->data << " -> " << temp->nextPtr << endl;
        temp = temp->nextPtr;
        length++;
    }
    cout<<"Length of list: "<<length<<endl;

    int pos;
    
    cout << "Enter position for insertion: ";
    cin >> pos;
        
    if(pos==1){//insertion at first
        node *newVal = new node();
        cout << "Enter value: ";
        cin >> newVal->data;
        newVal->nextPtr = head;
        head=newVal;
        length++;
    }
    
    else if(pos>1 && pos<=length){//insertion in middle
        temp = head;
        node *cur;
        int i = 1;
        while (i != pos){
            cur=temp;
            temp = temp->nextPtr;
            i++;
        }
        node *newVal = new node();
        cout << "Enter value: ";
        cin >> newVal->data;
        newVal->nextPtr = temp;
        cur->nextPtr = newVal;
        length++;
    }
    
    else if(pos==length+1){//insertion at last
        node *newVal = new node();
        cout << "Enter value: ";
        cin >> newVal->data;
        newVal->nextPtr = nullptr;
        tail->nextPtr = newVal;
        length++;
    }
    else{
        cout<<"Invalid position for insertion"<<endl;
    }

    temp=head;
    while (temp != nullptr){
        cout << temp->data << " -> " << temp->nextPtr << endl;
        temp = temp->nextPtr;
    }
    cout<<"Length of list: "<<length<<endl;

    cout<<"Enter position you want to delete: ";
    cin>>pos;
    if(pos==1){//deletion at first
        temp=head;
        head=head->nextPtr;
        delete temp;
        length--;
    }
    
    else if(pos>1 && pos<length){//deletion at middle
        int i=1;
        temp=head;
        node *cur;
        while(i<pos){
            cur=temp;
            temp=temp->nextPtr;
            i++;
        }
        
        cur->nextPtr=temp->nextPtr;
        delete temp;
        length--;
    }

    else if(pos==length){//deletion at last
        int i=1;
        temp=head;
        node *cur;
        while(i<length){
            cur=temp;
            temp=temp->nextPtr;
            i++;
        }
        cur->nextPtr=nullptr;
        tail=cur;
        delete temp;
        length--;
    }

    else{
        cout<<"Invalid position for deletion. ";
    }

    temp=head;
    while (temp != nullptr){
        cout << temp->data << " -> " << temp->nextPtr << endl;
        temp = temp->nextPtr;
    }
    cout<<"Length of list: "<<length<<endl;
}