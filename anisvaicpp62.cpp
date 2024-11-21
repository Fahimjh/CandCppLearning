#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int a,b;
    cout<<"Enter num 1 & 2: ";
    cin>>a>>b;
    cout<<"Before swapping, num1="<<a<<" Num2="<<b;
    swap(&a,&b);
    cout<<"\nBefore swapping, num1="<<a<<" Num2="<<b;
}