#include<iostream>
using namespace std;

void unique(int arr[],int n){
    cout<<"unique numbers: ";
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]&&i!=j){
                count++;
                break;
            }
        }
        if(count==0){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int arr[7],n=7;
    cout<<"Enter array values: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unique(arr,n);
    return 0;
}