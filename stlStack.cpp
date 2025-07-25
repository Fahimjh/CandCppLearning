#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> & s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

}

int main(){
    stack<int> s;
    char choice='y';
    while(choice=='y'|| choice=='Y'){
        cout<<"Enter value: ";
        int val;
        cin>>val;
        s.push(val);
        cout<<"Press y/Y to insert more value: ";
        cin>>choice;
    }
    cout<<s.top()<<endl;
    display(s);
    cout<<s.empty()<<endl;
    
}