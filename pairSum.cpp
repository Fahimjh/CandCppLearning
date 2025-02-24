#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[4]={7,2,11,15},target=13;
    // vector<int>vec={7,2,11,15};
    for(int i=0;i<4;i++){
        if(arr[i]+arr[i+1]==target){
            cout<<"values are: "<<arr[i]<<" and "<<arr[i+1]<<endl;
            break;
        }
    }
}