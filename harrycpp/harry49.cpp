#include<iostream>
using namespace std;

class Test{
    int b;
    int a;
    public:
    Test(int i, int j):a(i+b),b(j*6){
        cout<<"Constructor called\n";
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};
int main(){
    Test t(10,20);
    return 0;
}