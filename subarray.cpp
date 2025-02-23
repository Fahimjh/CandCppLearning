#include<iostream>
using namespace std;

int main(){
    int arr[7]={3,-4,5,4,-1,7,-8},n=7,sum=0,maxSum=0;
    for(int st=0;st<n;st++){
        sum=sum+arr[st];
        maxSum=max(sum,maxSum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<"Subarray maximum sum: "<<maxSum;
}