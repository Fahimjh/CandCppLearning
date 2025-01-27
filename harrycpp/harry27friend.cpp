#include<iostream>
using namespace std;

class complex;

class calculator{
    public:
    int addSum(complex ,complex );
    int sumRealComplex(complex ,complex );
};

class complex{
    friend int calculator::sumRealComplex(complex,complex);
    friend int calculator::addSum(complex,complex);
    int num1,num2;
    public:
    void setNum(int a, int b){
        num1=a;
        num2=b;
    }
    void printNum(void){
        cout<<"Your complex number: "<<num1<<" + "<<num2<<"i"<<endl;
    }
};

int calculator :: addSum(complex a,complex b){
        return a.num1+b.num1;
    }
int calculator :: sumRealComplex(complex o1,complex o2){
        return  (o1.num2+o2.num2);
    }

int main(){
    complex c1,c2;
    c1.setNum(2,4);
    c1.printNum();
    c2.setNum(3,6);
    c2.printNum();
    calculator calc;
    cout<<"Sum of the real part: "<<calc.addSum(c1,c2)<<endl;
    cout<<"Sum of the complex part: "<<calc.sumRealComplex(c1,c2)<<"i"<<endl;
    return 0;
}