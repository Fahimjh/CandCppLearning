#include<iostream>
using namespace std;
class complex{
    int num1, num2,num3;
    public:
    complex(int a, int b=2, int c =3){
        num1=a;
        num2=b;num3=c;
    }
    void getNumber(){
        cout<<"numebers are "<<num1<<","<<num2<<","<<num3<<endl;
    }
};
int main(){
    complex c1(1);
    c1.getNumber();
    return 0;
}