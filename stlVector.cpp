#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec={1,2,3};
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    cout<<"Vector size: "<<vec.size()<<endl;
    cout<<"Vector capacity: "<<vec.capacity()<<endl;
}