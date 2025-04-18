#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={0,10,5,2};
    int st=0,end=arr.size()-1,mid;
    while(st<=end){
        mid=st+(end-st)/2;
        if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
            cout<<mid;
            break;
        }
        else if(arr[mid+1]>arr[mid]){
            st=mid+1;
        }
        else if(arr[mid-1]>arr[mid]){
            end=mid-1;
        }
    }
}