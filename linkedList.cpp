#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* nextPtr;
};

int main(){
    node *head;
    node* node1=new node();
    node* node2=new node();
    node* node3=new node();

    head=node1;
    node1->data=05;
    node1->nextPtr=node2;
    node2->data=10;
    node2->nextPtr=node3;
    node3->data=15;
    node3->nextPtr=nullptr;
    cout<<"head address: "<<head<<endl;
    
    while(head!=nullptr){
        cout<<head->data<<" -> "<<head->nextPtr<<endl;
        head=head->nextPtr;
    }
    cout<<"node1 address: "<<node1->nextPtr<<endl;
    cout<<"node2 address: "<<node2->nextPtr<<endl;
    cout<<"node3 address: "<<node3->nextPtr<<endl;
}