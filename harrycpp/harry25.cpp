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
    employee emp[5];
    for(int i=0;i<5;i++){
        emp[i].setInfo();
        emp[i].getInfo();
    }
    return 0;
}