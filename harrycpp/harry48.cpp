#include<iostream>
using namespace std;

class base1{
    int data1;
    public:
    base1(int a){
        data1=a;
        cout<<"This is base1 class\nVariable: "<<data1<<endl;
    }
};

class base2{
    int data2;
    public:
    base2(int a){
        data2=a;
        cout<<"This is base2 class\nVariable: "<<data2<<endl;
    }
};
class derived: public base1, public base2{
    int data3,a,b;
    public:
    derived(int a, int b, int c): base1(b), base2(c){
        data3=a;
        cout<<"This is derived class\nVariable: "<<data3<<endl;
    }
};

int main(){
    derived d(1,2,3);
    return 0;
}