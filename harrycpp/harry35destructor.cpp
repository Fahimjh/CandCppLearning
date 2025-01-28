#include<iostream>
using namespace std;

int count=0;

class number{
    int num;
    public:
    number(int n){
        num=n;
        count++;
    }
    ~number(){
        count--;
        cout<<"This is the time when destructor gets called for number "<<count<<endl;
    }
    void show(){
        cout<<"Your "<<count<<" number is "<<num<<endl;
    }
};

int main(){
    number n(5);
    n.show();
    {
        number n2(4);
        n2.show();
        number n3(6);
        n3.show();
    }
    return 0;
}