#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n,f;
    cout<<"Enter value of n: ";
    cin>>n;
    f=fact(n);
    cout<<"factorial of "<<n<<"= "<<f;
}