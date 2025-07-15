#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// bool comparator(pair<int,int>p1,pair<int,int>p2){
//     if(p1.second<p2.second)return true;
//     if(p1.second==p2.second&&p1.first<p2.first)return true;
//     else return false;
// }

int main(){
    // vector<pair<int,int>>vec={{3,1},{5,2},{7,1},{2,1},{3,4}};
    
    // sort(vec.begin(),vec.end());
    
    // for(auto p:vec){
    //     cout<<p.first<<", "<<p.second<<endl;
    // }
    string s="abc";
    // next_permutation(s.begin(),s.end());
    prev_permutation(s.begin(),s.end());
    for(auto c :s){
        cout<<c;
    }
    cout<<endl;
}