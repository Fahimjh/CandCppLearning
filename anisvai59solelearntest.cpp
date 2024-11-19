#include<iostream>
using namespace std;
int demo(int x,int y=1){
    return x*y;
}

int main(){
    cout<<demo(8,5);
}