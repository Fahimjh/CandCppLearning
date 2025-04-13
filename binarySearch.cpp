#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={1,3,7,13,15};
    int start=0,end=arr.size()-1,mid,target;
    cout<<"Enter target: ";
    cin>>target;
    while(start<=end){
        mid=(start+end)/2;
        if(target>arr[mid]){
            start=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        else if(target==arr[mid]){
            break;
        }
    }
    if(arr[mid]==target){
        cout<<"Target "<<arr[mid]<<" founded."<<endl;
    }
    else
        cout<<"Target not found!";
}