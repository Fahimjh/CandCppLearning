#include<iostream>
using namespace std;

class employee{
    string type;
    public:
    int id;
    employee(){
        id=34;
        cout<<"Enter your department: ";
        getline(cin,type);
    }
    void show(){
        cout<<"Employee id: "<<id<<endl;
        cout<<"Employee type: "<<type<<endl;
    }
    ~employee(){}
};

class programmer:employee{
    //int pid;
    float salary;
    public:
    programmer(int id,int sal){
        employee::id=id;
        salary=sal;
    }
    void show(){
        employee::show();
        //cout<<"Programmer id: "<<pid<<endl;
        cout<<"Programmer salary: "<<salary<<endl;
    }
    ~programmer(){}
};

int main(){
    //employee e(688,80000);
    programmer p1(688,80000);
    p1.show();
    return 0;
}