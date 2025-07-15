#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<char>str={'h','e','l','l','o'};
    for (auto c : str){
        cout<<c<<" ";
    }
    cout<<endl;
    reverse(str.begin(),str.end());

    for (auto c : str){
        cout<<c<<" ";
    }
    cout<<endl;
}
