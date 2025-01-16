#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter 5 numbers: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int *p=arr;
    for(int i=0; i<5; i++){
        cout<<*(p+i)<<endl;
    }
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<*(p+1)<<endl;
    cout<<p+1<<endl;
}