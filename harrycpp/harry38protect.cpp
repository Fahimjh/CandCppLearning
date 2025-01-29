#include<iostream>
using namespace std;

class base{
    protected:
    int a;
    public:
    int b;
};

class derived : protected base{

};

int main(){
    base b;
    derived d;
    //b.a;
    // d.a;
    // d.b;
    return 0;
}