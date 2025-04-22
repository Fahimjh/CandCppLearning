#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>& nums,int k,int stu,int mid){
    int pages=0,i;
    for(i=0;i<nums.size();i++){
        if(nums[i]>mid){
            return false;
        }
        if(pages+nums[i]<= mid){
            pages=pages+nums[i];
            cout<<"Pages: "<<pages<<endl;
        }
        else{
            cout<<"stu: "<<stu<<endl;
            stu++;
            pages=nums[i];
            cout<<"Pages: "<<pages<<endl;
            if(stu>k&&i<nums.size()){
                return false;
            }
        }
    }
    if(stu==k&&i==nums.size()&&pages<=mid)
        return true;
}

int splitArray(vector<int>& nums, int k) {
    int total=0,st=0,mid,stu=1;
    for(int i=0;i<nums.size();i++){
        total=total+nums[i];
    }
    int ans,end=total;
    while(st<=end){
        mid=st+(end-st)/2;
        cout<<"mid: "<<mid<<endl;
        if(isValid(nums,k,stu,mid)){
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
    vector<int> nums={2,1,3,4};
    int k=2;
    cout<<splitArray(nums,k);
    return 0;
}