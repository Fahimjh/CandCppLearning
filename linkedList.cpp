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
    while (1){
        if (pos >= length+2 || pos < 1){
            cout << "Position invalid. Enter again: ";
            cin >> pos;
        }
        else{
            break;
        }
    }
    
    if(pos==1){
        node *newVal = new node();
        cout << "Enter value: ";
        cin >> newVal->data;
        newVal->nextPtr = head;
        head=newVal;
    }
    else if(pos>1 && pos<=length){
        temp = head;
        int i = 1;
        while (i != pos){
            tail=temp;
            temp = temp->nextPtr;
            i++;
        }
        node *newVal = new node();
        cout << "Enter value: ";
        cin >> newVal->data;
        newVal->nextPtr = temp;
        tail->nextPtr = newVal;
    }
    else if(pos==length+1){
        node *newVal = new node();
        cout << "Enter value: ";
        cin >> newVal->data;
        newVal->nextPtr = nullptr;
        tail->nextPtr = newVal;
    }
    else{
        cout<<"Invalid position";
    }
    length=0;
    temp=head;
    while (temp != nullptr){
        cout << temp->data << " -> " << temp->nextPtr << endl;
        temp = temp->nextPtr;
        length++;
    }
    cout<<"Length of list: "<<length<<endl;
}