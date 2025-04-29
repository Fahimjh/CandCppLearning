#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minVal=i;
        for(int j=i+1;j<n;j++){
            if(arr[minVal]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"]="<<arr[i]<<endl;
    }
}

int main(){
    int arr[5]={5,4,3,2,1},n=5;
    selectionSort(arr,n);
    printArr(arr,n);
}