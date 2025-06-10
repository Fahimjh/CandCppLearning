#include<iostream>
using namespace std;

int fib(int n){
    int sum,prev1=1,prev2=0;
    if(n==0||n==1){
        return n;
    }
    for(int i=1;i<n;i++){
        sum=prev1+prev2;
        prev2=prev1;
        prev1=sum;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Fibo: "<<fib(n)<<endl;
}