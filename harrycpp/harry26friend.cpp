#include<iostream>
using namespace std;

class complex{
    friend complex sumComplex(complex,complex);

    int num1,num2;
    public:
    void setData(int a,int b){
        num1=a;
        num2=b;
    }
    void getData(void){
        cout<<"Your complex number: "<<num1<<" + "<<num2<<"i"<<endl;
    }
};

complex sumComplex(complex a1, complex a2){
    complex a3;
    a3.setData((a1.num1+a2.num1),(a2.num1+a2.num2));
    return a3;
}

int main(){
    complex c1,c2,c3;
    c1.setData(2,4);
    c1.getData();
    c2.setData(4,6);
    c2.getData();
    c3=sumComplex(c1,c2);
    c3.getData();
    return 0;
}