#include<iostream>
using namespace std;

class b;
class a{
    friend void exchange(a &,b &);
    int val1;
    public:
    void setVal(int num){
        val1=num;
    }
    void getVal(){
        cout<<"Value of class a: "<<val1<<endl;
    }
};
class b{
    friend void exchange(a &,b &);
    int val2;
    public:
    void setVal(int num){
        val2=num;
    }
    void getVal(){
        cout<<"Value of class b: "<<val2<<endl;
    }
};

void exchange(a &a1,b &b1){
    int temp=a1.val1;
    a1.val1=b1.val2;
    b1.val2=temp;
    cout<<"Value swapped"<<endl;
}

int main(){
    a a1;b b1;
    a1.setVal(5);
    a1.getVal();
    b1.setVal(10);
    b1.getVal();
    exchange(a1,b1);
    a1.getVal();
    b1.getVal();
    return 0;
}