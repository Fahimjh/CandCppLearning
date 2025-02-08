#include<iostream>
using namespace std;

int bin2dec(int n){
    int res=0,i=1;

    while(n>0){
        if(n%2==1){
            res=res+i;
        }
        n=n/10;
        i*=2;

    }
    return res;
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<bin2dec(n);
    return 0;
}