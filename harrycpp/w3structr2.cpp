#include<iostream>
using namespace std;

struct time{
    int hour,min,sec;
};

int main(){
    time t1,t2,t3;
    cout<<"Enter 1st time: ";
    cin>>t1.hour>>t1.min>>t1.sec;
    cout<<"Enter 2nd time: ";
    cin>>t2.hour>>t2.min>>t2.sec;
    t3.sec=t1.sec+t2.sec;
    if(t3.sec>60){
        t3.sec=t3.sec-60;
        t3.min=1;
    }
    t3.min=t3.min+t1.min+t2.min;
    if(t3.min>60){
        t3.min=t3.min-60;
        t3.hour=1;
    }
    t3.hour=t3.hour+t1.hour+t2.hour;
    cout<<t3.hour<<" hours "<<t3.min<<" mins "<<t3.sec<<" sec";
    return 0;
}