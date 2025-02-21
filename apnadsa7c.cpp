//bitwise operators
#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cout<<"Enter number: ";
    cin>>n;
    while(1){
        if(n==2){
            count=0;
            break;
        }
        else if(n%2!=0){
            count++;
            break;
        }
        n=n>>1;
    }
    if(count!=0){
        cout<<"false"<<endl;
    }
    else
    cout<<"True"<<endl;
    //cout<<(n>>1)<<endl;
    
}