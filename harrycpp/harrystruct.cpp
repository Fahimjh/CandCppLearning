#include<iostream>
using namespace std;

typedef struct employee{
    int age;
    float salary;
} ep;

int main(){
    ep fahim;
    fahim.age=25;
    fahim.salary=25000;
    cout <<"Fahim's age: "<<fahim.age<<endl;
    cout <<"Fahim's salary: "<<fahim.salary<<endl;
}   