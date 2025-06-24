#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>dq={1,2,3,4,5};
    cout<<dq[2]<<endl;
    //dq[5]=4;
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<endl;
    }
    dq.insert(dq.begin()+1,3);
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<endl;
    }
}