#include<iostream>
using namespace std;

int main(){
    int arr[7]={3,-4,5,4,-1,7,-8},n=7,sum,maxSum=0;
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            sum=0;
            for(int i=st;i<=end;i++){
                cout<<arr[i];
                sum=sum+arr[i];
            }
            if(sum>maxSum){
                maxSum=sum;
            }
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<"Subarray maximum sum: "<<maxSum;
}