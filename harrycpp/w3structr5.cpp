#include<iostream>
using namespace std;

struct Employee{
    string id;
    int salary;
    string name;
};
int main(){
    Employee emp1,emp2,emp3;
    int highest=0,count=0;
    string name;
        for(int j=0;j<3;j++){
            if(j==0){
                cout<<"Enter employee "<<j+1<< " id: ";
                cin>>emp1.id;
                cout<<"Enter employee "<<j+1<< " salary: ";
                cin>>emp1.salary;
                cout<<"Enter employee "<<j+1<< " name: ";
                cin.ignore();
                getline(cin,emp1.name);
                if(emp1.salary>highest){
                    highest=emp1.salary;
                    count++;
                    name=emp1.name;
                }
            }
            else if(j==1){
                cout<<"Enter employee "<<j+1<< " id: ";
                cin>>emp2.id;
                cout<<"Enter employee "<<j+1<< " salary: ";
                cin>>emp2.salary;
                cout<<"Enter employee "<<j+1<< " name: ";
                cin.ignore();
                getline(cin,emp2.name);
                if(emp2.salary>highest){
                    highest=emp2.salary;
                    count++;
                    name=emp2.name;
                }
            }
            else if(j==2){
                cout<<"Enter employee "<<j+1<< " id: ";
                cin>>emp3.id;
                cout<<"Enter employee "<<j+1<< " salary: ";
                cin>>emp3.salary;
                cout<<"Enter employee "<<j+1<< " name: ";
                cin.ignore();
                getline(cin,emp3.name);
                if(emp3.salary>highest){
                    highest=emp3.salary;
                    count++;
                    name=emp3.name;
                }
            }
        }
    cout<<"Info of the highest salary employee: "<<endl;
    cout<<"emp"<<count<<endl;
    cout<<name<<endl;
    cout<<highest<<endl;
    
    return 0;
}