#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={1};
    int st = 1, end = nums.size() - 2, mid;
        if (nums[0] != nums[1]||nums.size()==1){
            cout<< nums[0];
            return 0;
        }
        if (nums[nums.size() - 1] != nums[nums.size() - 2]){
            cout<< nums[nums.size() - 1];
            return 0;
        }
        while (st <= end) {
            mid = st + (end - st) / 2;
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                cout<<nums[mid];
                break;
            } 
            if (nums[mid] == nums[mid - 1]){
                if(mid%2==0){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            else {
                if(mid%2==0){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
}