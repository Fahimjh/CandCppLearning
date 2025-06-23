#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec={1,2,3,4,5};
    cout<<"forword:"<<endl;
    for(auto it=vec.begin(); it!=vec.end(); it++){
        cout<<*(it)<<endl;
    }
    cout<<"backword:"<<endl;
    for(auto it=vec.rbegin(); it!=vec.rend(); it++){
        cout<<*(it)<<endl;
    }
}