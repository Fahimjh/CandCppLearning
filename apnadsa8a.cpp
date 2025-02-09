#include<iostream>
using namespace std;

int findMin(int arr[]){
    int smallest=INT8_MAX,ind4min;
    for(int i=0;i<5;i++){
        smallest=min(arr[i],smallest);
        if(smallest==arr[i])ind4min=i;
    }
    cout<<"Pos: "<<ind4min;
    return smallest;
}
int findMax(int arr[]){
    int biggest=INT8_MIN,ind4max;
    for(int i=0;i<5;i++){
        biggest=max(arr[i],biggest);
        if(biggest==arr[i])ind4max=i;
    }
    arr[ind4max]=96;
    cout<<"Pos: "<<ind4max;
    return biggest;
}

int main(){
    int arr[5]={69,25,7,12,-4};
    cout<<" Min Value: "<<findMin(arr)<<endl;
    cout<<" Max Value: "<<findMax(arr)<<endl;
    //cout<<biggest<<" POs: "<<ind4max<<endl;
    //cout<<biggest<<endl;
    cout<<arr[0]<<endl;
    return 0;
}