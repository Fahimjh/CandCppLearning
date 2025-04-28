#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(vector<int>&vec,int m, int mid){
    int cow=1,i,val,lastpos=0;
    for(i=1;i<vec.size();i++){
        if(vec[i]+lastpos>=mid){
            cow++;
            lastpos=vec[i];           
        }
        if(cow==m){
            return true;
        }
    }
    return false;
}

int aggressiveCow(vector<int>&vec,int m){
    sort(vec.begin(),vec.end());
    int st=1,end=(vec.size()-1)-vec[0],mid,ans;
    while(st<=end){
        mid=st+(end-st)/2;
        if(isValid(vec,m,mid)){
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int>vec={1,2,4,8,9};
    int m=3;
    cout<<aggressiveCow(vec,m);
    return 0;
}