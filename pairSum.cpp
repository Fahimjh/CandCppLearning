#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[4]={7,2,11,15},target=22;
    // vector<int>vec={7,2,11,15};
    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i]+arr[j]==target){
                cout<<"values are: "<<arr[i]<<" and "<<arr[j]<<endl;
                break;
            }
        }
    }
}