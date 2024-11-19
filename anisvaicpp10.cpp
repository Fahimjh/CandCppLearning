#include<iostream>
using namespace std;
int main(){
    int num;
    string name;
    int num2;
    char nameC[20];
    float numf;
    double numd;
    bool tfb;
    cout<<"Enter int num1: ";
    cin>>num;
    cout<<"Enter your string name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter int num2: ";
    cin>>num2;
    cout<<"Enter your char name: ";
    cin.ignore();
    cin.getline(nameC,20);
    cout<<"Enter float num: ";
    cin>>numf;
    cout<<"Enter double num: ";
    cin>>numd;
    cout<<"Enter boolean value: ";
    cin>>tfb;
    cout<<"your given values: ";
    cout<<"\nint nums: "<<num<<" "<<num2;
    cout<<"\nyour string name: "<<name;
    cout<<"\nyour char name: "<<nameC;
    cout<<"\nfloat and double nums: "<<numf<<" "<<numd;
    cout<<"\nYour boolean value: "<<tfb;
}