#include<iostream>
using namespace std;

//class x;
class y;

//void add(x ,y);

class x{
    friend void add(x,y);
    int val;
    public:
    void setData(int data){
        val=data;
    }
};

class y{
    friend void add(x,y);
    int num;
    public:
    void setnum(int data){
        num=data;
    }
};

void add(x a,y b){
    cout<<"Sum of your value: "<<a.val+b.num<<endl;
}

int main(){
    x x1;
    y y1;
    x1.setData(5);
    y1.setnum(6);
    add(x1,y1);
    return 0;
}