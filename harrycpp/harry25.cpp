#include<iostream>
using namespace std;

class employee{
    int id;
    int salary=122;
    public:
    void setInfo(void){
        cout<<"Enter employee id: ";
        cin>>id;
    }  
    void getInfo(void){
        cout<<"Employee id: "<<id<<endl;
        cout<<"Employee salary: "<<salary<<endl;
    }
};

int main(){
    employee fahim,sensei,cr;
    fahim.setInfo();
    fahim.getInfo();
    sensei.setInfo();
    sensei.getInfo();
    cr.setInfo();
    cr.getInfo();
    return 0;
}