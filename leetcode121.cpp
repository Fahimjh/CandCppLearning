#include<iostream>
using namespace std;

int main(){
    int arr[]={7,6,4,3,1};
    int maxProfit=0,bestBuy=arr[0];
    //cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    // while(i<j){
    //     if(arr[i+1]<min){
    //         min=arr[i+1];
    //         i++;
    //     }
    //     else i++;
    //     if(arr[j-1]>arr[j]){
    //         max=arr[j-1];
    //         j--;
    //         diff=max-min;
    //     }
    //     else j--;
    //     if(i==j-1&&diff<0){
    //         diff=0;
    //     }
    // }
    for(int i=1;i<4;i++){
        if(bestBuy<arr[i]){
            maxProfit=max(maxProfit,arr[i]-bestBuy);
        }
        bestBuy=min(bestBuy,arr[i]);
    }
    cout<<maxProfit;
}