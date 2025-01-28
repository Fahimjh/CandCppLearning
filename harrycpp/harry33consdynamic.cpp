#include<iostream>
using namespace std;

class bankDeposit{
    int principle,rate,year;
    float returnRate,Rate;
    public:
    bankDeposit(){}
    bankDeposit(int, int, int);
    bankDeposit(int, int, float);
    void show();
};
bankDeposit :: bankDeposit(int p, int y, int r){
    principle=p;
    year=y;
    rate=r;
    returnRate=principle+(year*rate);
}
bankDeposit :: bankDeposit(int p, int y, float R){
    principle=p;
    year=y;
    Rate=R;
    returnRate=principle+(year*Rate);
}
void bankDeposit::show(){
    cout<<"Your principle: "<<principle<<endl;
    cout<<"year: "<<year<<endl;
    cout<<"Your Return: "<<returnRate<<endl;
}

int main(){
    bankDeposit b1,b2,b3;
    int p,y,r;
    float R;
    cout<<"Enter principle, year, rate: ";
    cin>>p>>y>>r;
    b1=bankDeposit(p,y,r);
    b1.show();
    cout<<"Enter principle, year, Rate: ";
    cin>>p>>y>>r;
    b2=bankDeposit(p,y,r);
    b2.show();
}