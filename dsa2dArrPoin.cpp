#include<iostream>
using namespace std;

int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3]={1,2,3};
    //int *p=a;
    // for(auto i:a){
    //     for(auto j:i){
        //         cout<<j<<endl;
        //     }
        // }
        int (*p)[3]=a;
    cout<<"*(a)="<<*(a)<<endl;
    cout<<"*(a[0])="<<*(a[0])<<endl;
    cout<<"a[0]="<<a[0]<<endl;
    cout<<"a[0][0]="<<a[0][0]<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"*(b)="<<*(b)<<endl;

}