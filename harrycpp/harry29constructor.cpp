#include<iostream>
using namespace std;

class complex{
    friend int addComplex(complex,complex);
    friend int addRealComplex(complex,complex);
    int num1,num2;
    public:
    complex(void){//default constructor (accepts no parameter)
        num1=0;
        num2=0;
    }
    complex(int a,int b){//parameterized constructor (accepts parameter)
        num1=a;
        num2=b;
    }
    complex(int a){//Constructor with single parameter
        num1=a;
        num2=0;
    }
    void getData(){
        cout<<"Your complex number: "<<num1<<" + "<<num2<<" i"<<endl;
    }
};
int addComplex(complex a,complex b){
    return a.num1+b.num1;
}
int addRealComplex(complex a,complex b){
    return a.num2+b.num2;
}
int main(){
    complex c1(2,4),c2(3,6);
    c1.getData();
    c2.getData();
    cout<<"Summation of your first part: "<<addComplex(c1,c2)<<endl;
    cout<<"Summation of your second part: "<<addRealComplex(c1,c2)<<"i"<<endl;
    complex c3;
    c3.getData();
    complex c4(3);//constructor overloading
    c4.getData();
    return 0;
}