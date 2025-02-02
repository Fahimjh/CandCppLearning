#include<iostream>
using namespace std;

class Student{
public:
    float cgpa;
    string name;
    Student(){
        cout<<"Hello I am student's constructor\n";
    }
    ~Student(){
        cout<<"Hello I am student's destructor\n";
    }
};

class Teacher{
public:
    string subject;
    Teacher(){
        cout<<"Hello I am graduate student's constructor\n";
    }
    ~Teacher(){
        cout<<"Hello I am graduate student's destructor\n";
    }
};

class TA: public Student, public Teacher{
    public:
    int salary;
    TA(string n, string s, int sal, float cg){
        this->name=n;
        this->subject=s;
        this->salary=sal;
        this->cgpa=cg;
    }
    void getInfo(){
        cout<<name<<endl;
        cout<<subject<<endl;
        cout<<cgpa<<endl;
        cout<<salary<<endl;
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
Copy constructor passes the value of an object to another object like pass by value
It's called shallow copy.
There are another type of copy constructor. It's called deep copy.
When we allocate memory dynamically, then sallow copy can't create memory 
space individually.
Then we need to create deep copy constructor on our own and it creates
different memory allocation individually for dynamically allocated variable of each object.

                            Destructor
Destructor is a special type of function like constructor
DIfference is constructor is for allocating memory and destructor is for
deleting memory
Compiler also creates selft made destructor and it also gets called by compiler
itself automatically like constructor
After execution of main function, when compiler understands that this object
has no use then it creates a destructor to free the space and calls it.
But, for dynamically allocated memory (deep copy constructor), we need to
create destructor on our own cause compiler's Destructor can't delete dyna
mically allocated memory.
As we use "new" keyword to allocate memory dynamically, we use "delete" keyword
to release that allocated memory and we should do it in our destructor if
we allocate it in constructor. So we should have our own destructor.
                        
                            Inheritance
Oop is a part of real world scenario and Sometimes we need to use the attributes
and member functions of an object to another object.
If we create another class with same attributes and functions then it takes
more time and a very bad practice
oop has a very good tool for that which is inheritance. we can inherit one class
to another and by that we can use all the attributes and functions of that
class without writing that again and again
The class we inherits to another class is called parent/base class and other
is child/derived class.
At the time of inheritance, constructor of base class gets called before and 
Child gets later and in the time of destructor, child gets called before and
base after.
Parameterized constructor doesn't get called autmatically, we need to call it
on our own. In inheritance, we can call it from child class's constructor
calling it from the child's cnstructor, we need to pass the exact 
same parameters which we've declared inside the constructor creation.
there are 4 types of inheritance. single, multiple, multilevel, hierarchycal.
In single, there's only one parent and child class.
in multilevel, there are two/three stages of inheritance one comes
from another.
In multiple inheritance, there are two parent and one child class. that child 
class inherits both parent class's property
*/

int main(){
    // Student s1("Jamil hasan fahim",25,3.14);
    // // s1.name="Jamil hasan Fahim";
    // // s1.age=25;
    // // s1.cgpa=3.14;
    // s1.getInfo();
    TA t1("Jamil Hasan Fahim","Software",25000,3.14);
    t1.getInfo();

    return 0;
}