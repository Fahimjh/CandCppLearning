#include<iostream>
using namespace std;
class base1{
    protected:
    int bs1;
    public:
    void set_base1(int a){
        bs1 = a;
    }
};
class base2{
    protected:
    int bs2;
    public:
    void set_base2(int a){
        bs2 = a;
    }
};
class base3{
    protected:
    int bs3;
    public:
    void set_base3(int a){
        bs3 = a;
    }
};
class derived: public base1, public base2, public base3{
    public:
    void show(){
        cout<<"The value of base1 is "<<bs1<<endl;
        cout<<"The value of base2 is "<<bs2<<endl;
        cout<<"The value of base3 is "<<bs3<<endl;
        cout<<"The sum of these values is "<<bs1+bs2+bs3<<endl;
    }
};

int main(){
    derived d;
    d.set_base1(5);
    d.set_base2(10);
    d.set_base3(15);
    d.show();
    return 0;
}