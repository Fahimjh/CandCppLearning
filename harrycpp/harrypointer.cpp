#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter an int value: ";
    cin>>a;
    int* b=&a;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Address of a using b: "<<b<<endl;
    cout<<"Value of b: "<<*b<<endl;
    //cout<<"Value of a: "<<b<<endl;
    
}