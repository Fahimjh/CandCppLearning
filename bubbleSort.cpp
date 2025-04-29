#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
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
    bubbleSort(arr,n);
    printArr(arr,n);
}