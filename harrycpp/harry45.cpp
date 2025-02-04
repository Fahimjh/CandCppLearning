#include<iostream>
using namespace std;

class Student{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no = a;
    }
    void get_number(){
        cout<<"The roll number is "<<roll_no<<endl;
    }
};
class Test:virtual public Student{
    protected:
    float maths, physics;
    public:
    void set_marks(float a, float b){
        maths = a;
        physics = b;
    }
    void get_marks(){
        cout<<"The marks obtained in maths are "<<maths<<endl;
        cout<<"The marks obtained in physics are "<<physics<<endl;
    }
};
class Sports:virtual public Student{
    protected:
    float score;
    public:
    void set_score(float a){
        score = a;
    }
    void get_score(){
        cout<<"The score obtained in sports is "<<score<<endl;
    }
};
class Result: public Test, public Sports{
    float total;
    public:
    void display(){
        total = maths + physics + score;
        get_number();
        get_marks();
        get_score();
        cout<<"The total marks obtained are "<<total<<endl;
    }
};
int main(){
    Result r;
    r.set_number(420);
    r.set_marks(94.0, 90.0);
    r.set_score(9.0);
    r.display();
    return 0;
}