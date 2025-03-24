#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={4,3,2,1,2};
    vector<int>answer=nums;
    int presuf=1;
    answer[0]=1;
    for(int i=0;i<answer.size();i++){
        presuf=presuf*nums[i];
        answer[i+1]=presuf;
        cout<<"answer["<<i<<"]="<<answer[i]<<endl;
    }
    presuf=1;cout<<"new"<<endl;
    for(int i=answer.size()-2;i>=0;i--){
        presuf=presuf*nums[i+1];
        answer[i]=presuf*answer[i];
        cout<<"answer["<<i<<"]="<<answer[i]<<endl;
    }
}