#include<iostream>
using namespace std;

void intersaction(int arr1[],int n1,int arr2[],int n2){
    cout<<"[";
    for(int i=0;i<n1;i++){
        int count=0;
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<",";
                break;
            }
        }
    }
    cout<<"]";
}

int main(){
    int arr1[5]={1,2,3,4,5},n1=5,arr2[4]={6,7,3,1},n2=4;
    cout<<"Enter array values: ";
    intersaction(arr1,n1,arr2,n2);
    return 0;
}