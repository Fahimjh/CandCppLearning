#include<iostream>
using namespace std;

int main(){
    int a=10;
    int* ptr=&a;//ptr is a pointer which can hold the address of an intager value
    int** parPtr=&ptr;//parPtr is a pointer which can hold the address of an intager type pointer value
    cout<<"value of a="<<a<<endl;//10
    cout<<"address of a="<<&a<<endl;//hex value of a
    cout<<"value of ptr="<<ptr<<endl;//address of a
    cout<<"address of ptr="<<&ptr<<endl;//hex value of ptr
    cout<<"deference of ptr="<<*ptr<<endl;//10
    cout<<"value of parPtr="<<parPtr<<endl;//address of ptr
    cout<<"address of parPtr="<<&parPtr<<endl;//hex value of parPtr
    cout<<"dereference of parPtr once="<<*parPtr<<endl;//address of a
    cout<<"dereference of parPtr twice="<<**parPtr<<endl;//10

}