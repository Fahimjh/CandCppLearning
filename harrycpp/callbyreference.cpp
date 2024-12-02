#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a= *b;
    *b=temp;
}

int main(){
    int a=5,b=10;
    int *ptr1=&a,*ptr2=&b;
    cout<<"Value before swapping: "<<endl<<"a= "<<a<<" b= "<<b<<endl;
    swap(ptr1,ptr2);
    cout<<"Value after swapping: "<<endl<<"a= "<<a<<" b= "<<b<<endl;
}