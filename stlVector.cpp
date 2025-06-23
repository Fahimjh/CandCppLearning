#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec={1,2,3,6,7,8,9,4,5};
    cout<<"Vector size: "<<vec.size()<<endl;
    cout<<"Vector capacity: "<<vec.capacity()<<endl;
    vec.erase(vec.begin()+3,vec.end()-2);
    cout<<"Vector size: "<<vec.size()<<endl;
    cout<<"Vector capacity: "<<vec.capacity()<<endl;
    cout<<"Vector isEmpty: "<<vec.empty()<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
    vec.clear();
    cout<<"Vector size: "<<vec.size()<<endl;
    cout<<"Vector capacity: "<<vec.capacity()<<endl;
    cout<<"Vector isEmpty: "<<vec.empty()<<endl;
}