#include<iostream>
using namespace std;
void rec(char a){
    cout<<"Value received from main: "<<a;
}
int main(){
    char a;
    cout<<"Enter a character: ";
    cin>>a;
    rec(a);
}