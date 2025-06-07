#include<iostream>
using namespace std;

int fibo(int n){
    if(n==1||n==0){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<n<<"th term fibonacci number: "<<fibo(n)<<endl;
}