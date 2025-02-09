#include<iostream>
using namespace std;

//int findMin()

int main(){
    int arr[5]={69,25,7,12,-4},smallest=INT8_MAX,biggest=INT_FAST8_MIN;
    int ind4min,ind4max;

    for(int i=0;i<5;i++){
        smallest=min(arr[i],smallest);
        if(smallest==arr[i])ind4min=i;
        biggest=max(arr[i],biggest);
        if(biggest==arr[i])ind4max=i;
    }
    cout<<smallest<<" POs: "<<ind4min<<endl;
    cout<<biggest<<" POs: "<<ind4max<<endl;
    //cout<<biggest<<endl;
    return 0;
}