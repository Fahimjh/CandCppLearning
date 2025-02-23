#include<iostream>
using namespace std;

int main(){
    int arr[7]={3,-4,5,4,-1,7,-8},n=7,sum,maxSum=0;
    for(int st=0;st<n;st++){
        sum=0;
        for(int end=st;end<n;end++){
            sum=sum+arr[end];
            if(sum>maxSum){
                maxSum=sum;
            }
        }
    }
    cout<<"Subarray maximum sum: "<<maxSum;
}