#include<iostream>
using namespace std;

void swap(int a,int b){
    int temp=a;
    a=b;b=temp;
    cout<<"value of a in function: "<<a<<endl;
    cout<<"value of b in function: "<<b<<endl;
}

int main(){
    int a,b;
    //int *ptr1=&a,*ptr2=&b;
    cout<<"Enter value of a and b: ";
    cin>>a>>b;
    swap(a,b);
    cout<<"value of a in main: "<<a<<endl;
    cout<<"value of b in main: "<<b<<endl;
}