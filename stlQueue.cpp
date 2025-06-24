#include<iostream>
#include<queue>
using namespace std;

int main(){
    // queue<int>q1,q2;
    // q1.push(1);
    // q1.push(2);
    // q1.push(3);
    // q2=q1;
    // cout<<"q1 size: "<<q1.size()<<endl;
    // cout<<"q2 size: "<<q2.size()<<endl;
    // while(!q1.empty()){
    //     cout<<q1.front()<<" ";
    //     q1.pop();
    // }
    // cout<<endl;
    priority_queue<int>pq;
    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    priority_queue<int,vector<int>,greater<int>>pqr;
    pqr.push(5);
    pqr.push(3);
    pqr.push(10);
    pqr.push(4);
    while(!pqr.empty()){
        cout<<pqr.top()<<" ";
        pqr.pop();
    }
    cout<<endl;
}