#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    while(n>0){
        fact=fact*n;
        n--;
    }    
    return fact;
}
int binomialCoefficient(int n, int r){
    int nr=n-r;
    return factorial(n)/(factorial(r)*factorial(nr));

}

int main(){
    cout<<binomialCoefficient(8,2)<<endl;
    cout<<binomialCoefficient(6,3)<<endl;
    return 0;
}