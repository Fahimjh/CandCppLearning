#include<iostream>
using namespace std;
void sumF(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum in Function: "<<sum;
}
int main(){
    int arr[3]={80,33,27},n,sum=0;
    n=sizeof(arr)/sizeof(arr[0]);
    sumF(arr,n);
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"\nSum in Main: "<<sum;
}