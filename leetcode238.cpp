#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={-1,1,0,-3,3};
    vector<int>answer=nums;
    int prod;
    for(int i=0;i<answer.size();i++){
        prod=1;
        for(int j=0;j<answer.size();j++){
            if(j!=i){
                prod*=nums[j];
            }
        }
        answer[i]=prod;
        cout<<"answer["<<i<<"]="<<answer[i]<<endl;
    }
}