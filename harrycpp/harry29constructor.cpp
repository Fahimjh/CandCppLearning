#include<iostream>
using namespace std;

class complex{
    int num1,num2;
    public:
    complex(int a,int b){
        num1=a;
        num2=b;
    }
    void getData(){
        cout<<"Your complex number: "<<num1<<" + "<<num2<<" i"<<endl;
    }
};

int main(){
    complex c1(2,4),c2(3,6);
    c1.getData();
    c2.getData();
}