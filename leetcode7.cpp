#include<iostream>
using namespace std;

int reverse(int x) {
    int rev=0;
    while(x!=0){
        rev=rev*10+(x%10);
        x=x/10;
    }
    return rev;
}

int main(){
    int x=-123;
    cout<<reverse(x)<<endl;
}