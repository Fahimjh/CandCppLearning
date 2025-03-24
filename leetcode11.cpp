#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>height={8,7,2,1};
    int maxWater=0,curWater,i=0,j=height.size()-1,width;
    while(i<j){
        cout<<"i: "<<i<<endl;
        cout<<"j: "<<j<<endl;
        width=j-i;
        cout<<"width: "<<width<<endl;
        curWater=min(height[i],height[j])*width;
        cout<<"currwater: "<<curWater<<endl;
        maxWater=max(curWater,maxWater);
        cout<<"maxwater: "<<maxWater<<endl;
        if(height[i]<height[j]){
            i++;
        }
        else j--;
        
    }
    cout<< maxWater;
}