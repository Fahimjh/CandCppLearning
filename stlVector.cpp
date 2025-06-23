#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec={1,2,3,4,5};
    vector<int>::iterator it;
    cout<<"forword:"<<endl;
    for(it=vec.begin(); it!=vec.end(); it++){
        cout<<*(it)<<endl;
    }
    cout<<"backword:"<<endl;
    vector<int>::reverse_iterator rit;
    for(rit=vec.rbegin(); rit!=vec.rend(); rit++){
        cout<<*(rit)<<endl;
    }
}