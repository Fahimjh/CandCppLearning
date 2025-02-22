#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;
    vec.push_back(4);
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(1);
    int val=vec[0];
    for(int i=1;i<5;i++){
        val=val^vec[i];
        //cout<<vec[i]<<endl;
    }
    cout<<val;
}