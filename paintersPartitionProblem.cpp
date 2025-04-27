#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>&vec,int m, int mid){
    int paint=0, painter=1,i,val;
    for(i=0;i<vec.size();i++){
        if(vec[i]>mid){
            return false;
        }
        if(vec[i]+paint<=mid){
            paint=paint+vec[i];
            cout<<"Paint: "<<paint<<endl;
        }
        else{
            painter++;
            paint=vec[i];
            cout<<"Paint: "<<paint<<endl;
            if(painter>m&&i<vec.size()){
                return false;
            }
        }
        if(painter<=m&&i<vec.size()&&paint<=mid){
            val=true;
        }
    }
    return val;
}

int paintersPart(vector<int>&vec,int m){
    int st=0,end,mid,total=0,ans;
    for(int i=0;i<vec.size();i++){
        total=total+vec[i];
    }
    end=total;
    while(st<=end){
        mid=st+(end-st)/m;
        cout<<"mid: "<<mid<<endl;
        if(isValid(vec,m,mid)){
            end=mid-1;
            ans=mid;
            cout<<"ans: "<<ans<<endl;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int>vec={35,10,20,30,40,50};
    int m=3;
    cout<<paintersPart(vec,m);
    return 0;
}