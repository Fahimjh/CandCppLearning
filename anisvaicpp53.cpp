#include<iostream>
using namespace std;
void addition(int a, int b){
    cout<<"Addition= "<<a<<"+"<<b<<"="<<a+b<<endl;
}
void subtraction(int a, int b){
    cout<<"Subtraction= "<<a<<"-"<<b<<"="<<a-b<<endl;
}
void multiplication(int a, int b){
    cout<<"Multiplication= "<<a<<"x"<<b<<"="<<a*b<<endl;
}
void division(int a, int b){
    cout<<"division= "<<a<<"/"<<b<<"="<<(float)a/b<<endl;
}
int main(){
    int a,b;
    cin>>a>>b;
    addition(a,b);
    subtraction(a,b);
    multiplication(a,b);
    division(a,b);
    
}