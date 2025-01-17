#include<iostream>
using namespace std;

struct student{
    int age;
    string first_name,last_name;
    int standard;
};

int main(){
    student std1;
    cin>>std1.age;
    cin>>std1.first_name;
    cin>>std1.last_name;
    cin>>std1.standard;
    
    cout<<std1.age<<" "<<std1.first_name<<" "<<std1.last_name<<" "<<std1.standard<<" "<<endl;
    return 0;
}