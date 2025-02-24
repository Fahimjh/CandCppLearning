#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>vec){
    int count=0,maxCount=0,val;
    
    for(int i=0;i<vec.size()-1;i++){
        count=0;
        for(int j=i+1;j<vec.size();j++){
            if(vec[i]==vec[j]){
                count++;
            }
        }
        if(maxCount<count){
            maxCount=count;
            val=vec[i];
        }
    }
    return val;
}

int main(){
    vector<int>vec={1,1,2,2,2};
    cout<<majorityElement(vec)<<endl;
}