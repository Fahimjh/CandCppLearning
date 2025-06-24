#include<iostream>
#include<vector>
using namespace std;

int main(){
    pair<int,char>p1={1,'f'};
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
    pair<int,pair<char,int>>p={25,{'F',50}};
    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;
    vector<pair<char,int>>vec;
    vec.push_back({'f',69});
    vec.push_back({'f',69});
    vec.push_back({'f',69});
    cout<<vec[0].first;
    cout<<vec[0].second;
    cout<<"vector pair size: "<<vec.size()<<endl;
    cout<<"vector pair capacity: "<<vec.capacity()<<endl;
}