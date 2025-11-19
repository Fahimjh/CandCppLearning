#include<iostream>
using namespace std;

int main(){
    int arr[10],val,pos,n;
    char c='n';
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array values: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your array : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    while(c!='y'){
        cout<<"\nEnter value you want to insert: ";
        cin>>val;
        cout<<"Enter pos you want to insert: ";
        cin>>pos;
        if(pos==n){
            arr[n]=val;
            n++;
        }
        else if(pos<n){
            for(int i=n;i>=pos;i--){
                arr[i]=arr[i-1];
            }
            arr[pos-1]=val;n++;
        }
        cout<<"\nPress y if you dont want to insert anymore: ";
        cin>>c;
    }
    cout<<"Your array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}