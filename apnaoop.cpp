#include<iostream>
using namespace std;

class Teacher{
private:
    float salary;

public:

    Teacher(){
        cout<<"Hello I am a non parameterized constructor\n";
    }
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
                        Encapsulation 
means wrapping up attributes and members in a single unit
eg-> declaring an object with attributes and member functions inside a class;
Encapsulation helps in data hiding through access modifiers
eg-> private, protected, public
private-> can't access from outside of that member/class;
protected-> limited access from outside of that member/class;
public->full access from outside of that class
                    
                        Constructor
A special type function having name as same with class
Three types of constructor->Parameterized, non parameterized, copy;
Gets automatically called when object is created
Can't call it whenever we want, can only call at the time of creating object
Has power to set the values of the attributes of objects
If we don't create our constructor, then compiler automatically creates one and calls it at the time of creating object
so it's better to learn and create our self made constructor
must be in public section of the class otherwise compiler can't access it from main function
*/

int main(){
    Teacher t1;
    t1.name="Fahim";
    t1.dept="Software";
    t1.setSalary(25000);
    t1.getSalary();
    return 0;
}