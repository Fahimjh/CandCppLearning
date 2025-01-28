#include<iostream>
using namespace std;

class Number{
    int num;
    public:
    Number(){
        num=0;
    }
    Number(int a){
        num=a;
    }
    // Number(Number &a){
    //     cout<<"Copy constructor called"<<endl;
    //     num=a.num;
    // }
    void show(){
        cout<<"Number is : "<<num<<endl;
    }
};

int main(){
    Number n1,n2,n3;
    n1.show();
    cout<<"Enter two numbers: ";
    int a,b;
    cin>> a>>b;
    n2=Number(a);
    n2.show();
    n3=Number(b);
    n3.show();
    Number n4(n3);
    n4.show();
    return 0;
}