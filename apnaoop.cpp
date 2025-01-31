#include<iostream>
using namespace std;

class Teacher{
private:
    float salary;
    string name,dept,subject;
public:
    Teacher(){
        cout<<"Hello I am a non parameterized constructor\n";
    }
    Teacher(string n, string d, string sub, float sal){//Parameterized
        name=n;
        subject=sub;
        dept=d;
        salary=sal;
    }
    Teacher(Teacher &obj){
        cout<<"Self made copy constructor\n";
        this->name=obj.name;
        this->dept=obj.dept;
        this->subject=obj.subject;
        this->salary=obj.salary;
    }
    //getter
    void getInfo(){
        cout<<"Teachers name: "<<name<<endl;
        cout<<"Teachers subject: "<<subject<<endl;
        cout<<"Teachers department: "<<dept<<endl;
        cout<<"Teachers salary: "<<salary<<endl;
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
must be in public section of the class otherwise compiler can't 
access it from main function
->Copy constructor is a special type constructor which passes the address of 
an object into another object
by constructor like a pointer passing values by reference
in c++, conpiler automatically creates copy constructor 
to ignore ambiguity and refer an object, we use "this->" operator to refer
an object
Copy constructor passes the exact same address of an object its occupying in a memory
if we pass t1 into t2; then t2 and t1 will address the same address.
*/

int main(){
    Teacher t1("Fahim","Software","SWE",25000);
    //t1.getInfo();
    Teacher t2(t1);
    t2.getInfo();
    return 0;
}