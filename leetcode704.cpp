#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector<int>& arr, int target, int start, int end){
    if(start<=end){
        int mid= start + (end-start)/2;
        
        if(target==arr[mid]){
            return mid;
        }
        
        else if(target>arr[mid]){
            return binSearch(arr,target,mid+1,end);
        }
        else{
            return binSearch(arr,target,start,mid-1);
        }
    }
        return -1;
}

int search(vector<int>& arr, int target){
    int start=0, end=arr.size()-1;
    return binSearch(arr,target,start,end);
}

int main(){
    vector<int>arr={1,3,5,7,9,11};
    int target=13;
    cout<<"Target in arr- "<<search(arr,target)<<endl;
}