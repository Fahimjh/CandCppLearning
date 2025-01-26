#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;
    public:
    void setId(void){
        cout<<"Enter employee id: ";
        cin>>id;
        count++;
    }
    void getId(void){
        cout<<"Id of employee: "<<id<<endl;
        cout<<"Employee number: "<<count<<endl;
    }
    static void getCount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};
int employee::count;
int main(){
    employee fahim,alif,cr;
    fahim.setId();
    fahim.getId();
    employee::getCount();
    alif.setId();
    alif.getId();
    employee::getCount();
    cr.setId();
    cr.getId();
    employee::getCount();
    return 0;
}