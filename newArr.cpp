#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter array values: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Your array : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}