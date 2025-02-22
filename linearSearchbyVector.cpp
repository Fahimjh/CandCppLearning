#include<iostream>
#include<vector>
using namespace std;

void linearSearch(vector<int> vec,int size,int num){
    int count=0;
    for(int i: vec){
        if(i==num){
            count++;
            cout<<i;
        }
    }
    if(count==0)
        cout<<"Not found";
}

int main(){
    int size,num;
    cout<<"Enter vector size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"Enter vector values: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"Enter search value: ";
    cin>>num;
    linearSearch(vec,size,num);
}