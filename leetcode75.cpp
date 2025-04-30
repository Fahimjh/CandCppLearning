#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int mid=0,low=0,high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            mid++;low++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}

void printArr(vector<int>& vec){
    for(int i=0;i<vec.size();i++){
        cout<<"arr["<<i<<"]="<<vec[i]<<endl;
    }
}

int main(){
    vector<int>vec={2,0,1};
    cout<<"Before sorting: "<<endl;
    printArr(vec);
    cout<<"After sorting: "<<endl;
    sortColors(vec);
    printArr(vec);

}