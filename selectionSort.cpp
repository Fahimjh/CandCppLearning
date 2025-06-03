#include<iostream>
using namespace std;

void ascendingSelectionSort(int arr[5], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
void descendingSelectionSort(int arr[5], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[j]>arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void printArr(int arr[5],int n){
    cout<<"Your array: ";
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }
}

int main(){
    int arr[5],n,c;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array Values: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Before sorting: ";
    printArr(arr,n);

    cout<<"Press 1 for ascending: ";
    cin>>c;
    if(c==1){
        ascendingSelectionSort(arr,n);
    }
    else{
        descendingSelectionSort(arr,n);
    }

    cout<<"After sorting: ";
    printArr(arr,n);

    return 0;
}