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
    ~Teacher(){}
};

class Student{
public:
    string name;
    float *cgptr;
    //float cgpa;
    Student(string name,float cgpa){
        this->name=name;
        cgptr=new float;
        *cgptr=cgpa;
    }
    Student(Student &obj){
        this->name=obj.name;
        cgptr=new float;
        *cgptr=*obj.cgptr;
    }
    void getInfo(){
        cout<<"Students name: "<<name<<endl;
        cout<<"Students cgpa: "<<*cgptr<<endl;
        //cout<<"Students cgpa: "<<cgpa<<endl;
    }
    ~Student(){
        delete cgptr;
        cout<<"Hello i am a destructor\n";
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
*/

int main(){
    // Teacher t1("Fahim","Software","SWE",25000);
    // //t1.getInfo();
    // Teacher t2(t1);
    // t2.getInfo();
    Student s1("Fahim",3.14);
    Student s2(s1);
    //s1.getInfo();
    s2.name="Amatullah";
    *(s2.cgptr)=4.00;
    //s2.cgpa=4.00;
    s1.getInfo();
    s2.getInfo();
    return 0;
}