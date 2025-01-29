#include<iostream>
using namespace std;

class Student{
    protected:
    int rolNum;
    public:
    void setRoll(int);
    void getRoll();
};

void Student::setRoll(int r){
    rolNum=r;
}
void Student::getRoll(){
    cout<<"Roll no of the student is: "<<rolNum<<endl;
}

class Exam:public Student{
    protected:
    float math,physics;
    public:
    void setMarks(float,float);
    void getMarks();
};

void Exam::setMarks(float m, float p){
    math=m;
    physics=p;
}

void Exam::getMarks(){
    cout<<"Physics marks: "<<physics<<endl;
    cout<<"Math marks: "<<math<<endl;
}

class Result:public Exam{
    public:
    void display(){
        getRoll();
        getMarks();
        float percentage=(math+physics)/2;
        cout<<"Your result percentage : "<<percentage<<endl;
    }
};

int main(){
    Result r;
    r.setRoll(688);
    r.setMarks(95.5,96.8);
    r.display();
    return 0;
}