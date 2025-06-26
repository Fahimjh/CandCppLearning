#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int>m={
        {"tv",100},
        {"mobile",150},
        {"laptop",100}
    };
    //m["cpu"]=200;
    m.insert({"monitor",120});
    m.emplace("monitor",140);
    m.emplace("monitor",150);
    //m.clear();
    if(m.empty()){
        cout<<"empty"<<endl;
    }
    for(auto p:m){
        cout<<p.first<<" = "<<p.second<<endl;
    }
    if(m.find("laptop")!=m.end()){
        cout<<"found"<<endl;
    }
    cout<<m.count("monitor")<<endl;
}