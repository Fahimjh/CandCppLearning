#include<iostream>
using namespace std;

class complex{
    int num1,num2;
    public:
    void setNum(int a, int b){
        num1=a;num2=b;
    }
    void getNum(){
        cout<<"Your complex number is: "<<num1<<" + "<<num2<<" i"<<endl;
    }
    void sumComplex(complex a1, complex a2){
        num1=a1.num1+a2.num1;
        num2=a1.num2+a2.num2;
    }
};

int main(){
    complex c1,c2,c3;
    c1.setNum(2,4);
    c1.getNum();
    c2.setNum(3,6);
    c2.getNum();
    c3.sumComplex(c1,c2);
    c3.getNum();
    return 0;
}