#include<iostream>
#include<vector>
using namespace std;

void reverseVec(vector<int> &vec,int size){
    int start=0,end=size-1;
    while(end>start){
        swap(vec[start],vec[end]);
        start++;end--;
    }
    cout<<"\nInside function: ";
    for(int i=0;i<size;i++){
        cout<<vec[i]<<" ";
    }
}

int main(){
    int size;
    cout<<"Enter vector size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"Enter vector values: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"\nBefore reverse: ";
    for(int i=0;i<size;i++){
        cout<<vec[i]<<" ";
    }
    reverseVec(vec,size);
    cout<<"\nAfter reverse: ";
    for(int i=0;i<size;i++){
        cout<<vec[i]<<" ";
    }
}