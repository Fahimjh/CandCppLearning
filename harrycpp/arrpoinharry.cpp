#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<"Array["<<i<<"]="<<arr[i]<<endl;
    }
    int *ptr=arr;
    cout<<"*ptr= "<<*(ptr)<<endl;
    cout<<"*(ptr+1)= "<<*(ptr+1)<<endl;
    cout<<"*(ptr+2)= "<<*(ptr+2)<<endl;
    cout<<"*(ptr+3)= "<<*(ptr+3)<<endl;
    cout<<"*(ptr+4)= "<<*(ptr+4)<<endl;
}