#include<iostream>
#include<string>
using namespace std;

class binary{
    private:
    string s;
    public:
    void read(void);
    void chkBin(void);
    void onsComp(void);
    void display(void);
};

void binary :: read(void){
    cout<<"Enter a binay number: ";
    getline(cin,s);
    //cin>>s;
}

void binary :: chkBin(void){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary number."<<endl;
            exit(-1);
        }
    }
}

void binary :: onsComp(void){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

void binary :: display(void){
    cout<<"Displaying your binary number: ";
    for(int i=0; i<s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    binary b;
    b.read();
    b.display();
    b.chkBin();
    b.onsComp();
    b.display();
    return 0;
}
