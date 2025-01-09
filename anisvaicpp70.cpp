#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int age;
    char id[15];

    void setInfo(){
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter id: ";
        cin.ignore();
        cin.getline(id,10);
        
    }

    void getInfo(){
        cout<<"Your name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"id: "<<id<<endl;
    }
};
int main(){
    student std1,std2,std3;
    std1.setInfo();
    
    std2.setInfo();
    
    std3.setInfo();
    std1.getInfo();
    std2.getInfo();
    std3.getInfo();
}