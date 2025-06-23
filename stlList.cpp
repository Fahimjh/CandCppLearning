#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l={1,2,3,6,4,5};
    cout<<"list size: "<<l.size()<<endl;
    cout<<"Forward: "<<endl;
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*(it)<<endl;
    }
    auto it=l.begin();
    advance(it,3);
    l.erase(it);
    cout<<"Backward: "<<endl;
    for(auto it=l.rbegin();it!=l.rend();it++){
        cout<<*(it)<<endl;
    }
    cout<<"list front"<<l.front()<<endl;
    cout<<"list back: "<<l.back()<<endl;
    l.clear();

}