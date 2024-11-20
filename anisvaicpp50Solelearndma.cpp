#include<iostream>
using namespace std;
int main(){
    int size=8,n,i;
    int *p=new int[size];
    cout<<"Enter how many values you want to store for array(must be less than 8): ";
    cin>>n;
    cout<<"Enter values you want to store for array: ";
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    *(p+1)=0;
    cout<<"Your array: ";
    for(i=0;i<n;i++){
        cout<<*p<<endl;
        p++;
    }
    delete[]p;
}