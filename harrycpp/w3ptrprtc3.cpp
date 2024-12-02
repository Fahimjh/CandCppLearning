#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<"Pointer : Demonstrate the use of & and * operator :"<<endl<<"--------------------------------------------------------"<<endl;
    int m=300;
    double fx= 300.600006;
    char cht='z';

    int *ptr1=&m;
    double *ptr2=&fx;
    char *ptr3=&cht;

    cout<<"m = "<<m<<endl;
    cout<<setprecision(10)<<"fx = "<<fx<<endl;
    cout<<"cht = "<<cht<<endl;

    cout<<" Using & operator :"<<endl<<"-------------------------"<<endl;
    cout<<"address of m = "<<&m<<endl;
    cout<<"address of fx = "<<&fx<<endl;
    cout<<"address of cht = "<<&cht<<endl;

    cout<<" Using & and * operator :"<<endl<<"-------------------------"<<endl;
    cout<<"value at address of m = "<<*(&m)<<endl;
    cout<<"value at address of fx = "<<*(&fx)<<endl;
    cout<<"value at address of cht = "<<*(&cht)<<endl;

    cout<<" Using only pointer variable :"<<endl<<"---------------------------"<<endl;
    cout<<"address of m = "<<ptr1<<endl;
    cout<<"address of fx = "<<ptr2<<endl;
    cout<<"address of cht = "<<ptr3<<endl;

    cout<<" Using only pointer operator :"<<endl<<"-------------------------"<<endl;
    cout<<"value at address of m = "<<*ptr1<<endl;
    cout<<"value at address of fx = "<<*ptr2<<endl;
    cout<<"value at address of cht = "<<*ptr3<<endl;
}