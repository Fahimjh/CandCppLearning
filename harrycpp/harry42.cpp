#include<iostream>
using namespace std;

class SimpleCalculator{
private:
    int num1,num2;
public:
    void getNum4simp(){
        cout<<"Enter two numbers: "<<endl;
        cin>>num1>>num2;
    }
    void show4simp(){
        cout<<"The sum of these numbers is "<<num1+num2<<endl;
        cout<<"The difference of these numbers is "<<num1-num2<<endl;
        cout<<"The product of these numbers is "<<num1*num2<<endl;
        cout<<"The division of these numbers is "<<num1/num2<<endl;;
    };
};

class ScientificCalculator{
private:
    float num1,num2,result;
    char choice;
public:
    void getNumb4scin(){
        cout<<"Enter two numbers: "<<endl;
        cin>>num1>>num2;
        cout<<"Enter the operation you want to perform:\n(A/a for "
        <<"addition, S/s for subtraction) M/m for multiplication "
        <<"D/d for division: "<<endl;
        cin>>choice;
    }
    float performOperation(){
        if(choice=='A' || choice=='a'){
            result=num1+num2;
        }
        else if(choice=='S' || choice=='s'){
            result=num1-num2;
        }
        else if(choice=='M' || choice=='m'){
            result=num1*num2;
        }
        else if(choice=='D' || choice=='d'){
            result=((float)num1)/num2;
        }
        else{
            cout<<"Invalid choice"<<endl;
        }
        return result;
    }
    void show4scin(float res){
        this->result=res;
        cout<<"The result of the operation is "<<result<<endl;
    }
    
};
class hybridCalculator: public SimpleCalculator, public ScientificCalculator{
public:
    void show(){
        SimpleCalculator::show4simp();
        ScientificCalculator::show4scin(ScientificCalculator::performOperation());
    }
};
int main(){
    hybridCalculator h;
    h.getNum4simp();
    h.show4simp();
    h.getNumb4scin();
    h.show4scin(h.performOperation());
    h.show();
    return 0;
}