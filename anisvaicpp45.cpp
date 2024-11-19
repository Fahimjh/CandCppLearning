#include<iostream>
using namespace std;
int main(){
    int arr[5],i,n;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array values: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
        cout<<"\n"<<arr[i];
    }
}