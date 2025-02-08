#include<iostream>
using namespace std;

int dec2bin(int n){
    int res=0,i=1;

    while(n>0){
        res=res+(n%2)*i;
        n=n/2;
        i*=10;

    }
    return res;
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<dec2bin(n);
    return 0;
}