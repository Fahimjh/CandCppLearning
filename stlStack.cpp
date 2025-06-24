#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s,s2;
    s.push(1);
    s.push(2);
    s.push(3);
    s2.swap(s);
    cout<<"stack size: "<<s.size()<<endl;
    cout<<"stack size: "<<s2.size()<<endl;
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<"stack size: "<<s.size()<<endl;
    cout<<"stack size: "<<s2.size()<<endl;
}