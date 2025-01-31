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
/*
Encapsulation means wrapping up attributes and members in a single unit
eg-> declaring an object with attributes and member functions inside a class;
Encapsulation helps in data hiding through access modifiers
eg-> private, protected, public
private-> can't access from outside of that member/class;
protected-> limited access from outside of that member/class;
public->full access from outside of that class

*/

int main(){
    Teacher t1;
    t1.name="Fahim";
    t1.dept="Software";
    t1.setSalary(25000);
    t1.getSalary();
    return 0;
}