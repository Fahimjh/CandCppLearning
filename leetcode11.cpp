#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>container={1,1};
    int maxArea=0;
    for(int i=0;i<container.size()-1;i++){
        for(int j=i+1;j<container.size();j++){
            maxArea=max((min(container[i],container[j])*(j-i)),maxArea);
            cout<<"current: "<<min(container[i],container[j])*(j-i)<<" max: ";
            cout<<maxArea<<endl;
        }
        cout<<i<<" th loop"<<endl;
    }
}