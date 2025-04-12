#include<iostream>
using namespace std;

void changeA(int a){
    a=20;
}

int main(){
    int a=10;
    cout<<"value of a before passing: "<<a<<endl;
    changeA(a);
    cout<<"value of a after passing: "<<a<<endl;
}