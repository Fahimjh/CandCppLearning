#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>vec){
    int count=0,maxCount=0,val;
    
    for(int i=0;i<vec.size()-1;i++){
        count=0;
        for(int j=i+1;j<vec.size();j++){
            if(vec[i]==vec[j]){
                count++;
            }
        }
        if(maxCount<count){
            maxCount=count;
            val=vec[i];
        }
    }
    return val;
}

int main(){
    vector<int>vec={1,1,2,2,2};
    int arr[5]={1,1,1,2,2},i=0,j=1;
    int count=1,val;
    for(i=1;i<=4;i++){
        if(arr[i]==arr[i-1]){
            count++;
            if(count>5/2){
                val=arr[i];
                break;
            }
        }
        else{
            count=1;
        }
    }
    cout<<"from array: "<<val<<endl;
    cout<<"from vector: "<<majorityElement(vec)<<endl;
}