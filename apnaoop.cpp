#include<iostream>
using namespace std;

class Teacher{
private:
    float salary;

public:
    string name,dept,subject;

    //setter
    void setSalary(float sal){
        salary=sal;
    }
    //getter
    void getSalary(){
        cout<<""<<name<<" Teachers salary: "<<salary<<endl;
    }
};

int main(){
    Teacher t1;
    t1.name="Fahim";
    t1.dept="Software";
    t1.setSalary(25000);
    t1.getSalary();
    return 0;
}