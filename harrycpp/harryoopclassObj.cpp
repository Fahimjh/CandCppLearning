#include<iostream>
using namespace std;

class employee{

    private:
    int age,salary;
    string name;

    public:
    string department,company;

    void setData(int a, int s, string n);

    void getData(){
        cout<<"Name of employee: "<<name<<endl;
        cout<<"Age of employee: "<<age<<endl;
        cout<<"Salary of employee: "<<salary<<endl;
        cout<<"Department of employee: "<<department<<endl;
        cout<<"Company of employee: "<<company<<endl<<endl;
    }
};
void employee::setData(int a, int s, string n){
    age=a;
    salary=s;
    name=n;
}

int main(){
    employee emp1,emp2;
    emp1.setData(25, 25000, "Jamil Hasan Fahim");
    emp1.department="Software Engineering";
    emp1.company="Daffodil";
    emp2.setData(23, 500000, "Magbah");
    emp2.department="Computer Engineering";
    emp2.company="Daffodil";

    emp1.getData();
    emp2.getData();
    return 0;
}