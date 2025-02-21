//bitwise operators
#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cout<<"Enter number: ";
    cin>>n;
    while(1){
        if(n/2==1){
            count==0;
            break;
        }
        else if(n%2!=0){
            //cout<<"else if n%2="<<n%2<<endl;
            count++;
            break;
        }
        n=n/2;
    }
    if(count==0){
        cout<<"True";
    }
    else
        cout<<"False";
}