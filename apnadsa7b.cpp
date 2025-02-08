#include<iostream>
using namespace std;

bool powOf2(int n){
    while(n>1){
        if(n%2!=0){
            return false;
            //break;
        }
        n=n/2;
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<powOf2(num);
}