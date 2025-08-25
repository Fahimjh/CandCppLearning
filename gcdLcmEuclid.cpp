#include<iostream>
using namespace std;

int gcd(int n1,int n2){
    if(n2==0)return n1;

    return gcd(n2,n1%n2);
}

int lcm(int gcd, int n1, int n2){
    return (n1*n2/gcd);
}

int main(){
    int n1=20,n2=28;
    cout<<lcm(gcd(n1,n2),n1,n2)<<endl;
}