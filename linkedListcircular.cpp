#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *nextPtr;
};

int main(){
    node *head=nullptr,*tail;
    int n;
    cout<<"Enter how many value you want to add in the list: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<"st value";
        node *temp=new node();
        cin>>temp->data;
        temp->nextPtr=nullptr;
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
    for(int i=0;i<10;i++){
        cout<<head->data<<" -> "<<head->nextPtr<<endl;
        head=head->nextPtr;
    }

}