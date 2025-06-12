#include<iostream>
using namespace std;

bool IsSorted(int arr[5],int n){
    if(n==0||n==1){
        return true;
    }
    return (arr[n-1]>=arr[n-2]) && IsSorted(arr,n-1);
}

int main(){
    int arr[5]={69},n=1;
    cout<<"Array is sorted: "<<IsSorted(arr,n)<<endl;
}