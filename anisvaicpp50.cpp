#include<iostream>
using namespace std;
int main(){
    int a;
    int *p;
    cout<<"Enter an int value: ";
    cin>>a;
    p=&a;
    cout<<"Value of a="<<a<<"\nValue of *p="<<*p<<endl;
    cout<<"Address of a="<<&a<<"\nAddress of p="<<p<<endl;
    *p=10;
    cout<<"Value of a="<<a<<"\nValue of *p="<<*p<<endl;
}