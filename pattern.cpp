#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec={-2};
    int sum=0,maxSum=INT8_MIN;
    // for(int i=0;i<5;i++){
        //     for(int j=i;j<5;j++){
            //         sum=0;
    //         for(int k=i;k<=j;k++){
    //             cout<<vec[k];
    //             sum=sum+vec[k];
    //         }
    //         if(sum>maxSum){
        //             maxSum=sum;
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<vec.size();i++){
    //     sum=0;
    //     for(int j=0;j<=i;j++){
    //         cout<<vec[j]<<" ";
    //         sum=sum+vec[j];
    //     }
    //     maxSum=max(maxSum,sum);
    //     cout<<endl;
    // }
    for(int i=0;i<vec.size();i++){
        if(sum<0)sum=0;
        sum=sum+vec[i];
        maxSum=max(maxSum,sum);
    }
    cout<<maxSum<<endl;
}