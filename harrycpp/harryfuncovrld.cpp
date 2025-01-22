#include<iostream>
using namespace std;

int sum(int a, int b){
    int add=a+b;
    return add;
}
int sum(int a, int b, int c){
    int add=a+b+c;
    return add;
}

int main(){
    cout<<"Sum of 5 & 10 is: "<<sum(5,10)<<endl;
    cout<<"Sum of 5, 10 & 15 is: "<<sum(5,10,15)<<endl;
    return 0;
}