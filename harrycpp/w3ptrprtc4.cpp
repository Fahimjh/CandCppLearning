#include<iostream>
using namespace std;

int main(){
    int a,b,sum=0;
    cout<<"Input the first number: ";
    cin>>a;
    cout<<"Input the second number: ";
    cin>>b;
    int *ptr1=&a,*ptr2=&b;
    sum=*ptr1+*ptr2;
    cout<<"THe sum of the entered numbers is : "<<sum;

}