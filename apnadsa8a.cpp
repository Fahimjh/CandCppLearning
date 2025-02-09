#include<iostream>
using namespace std;

//int findMin()

int main(){
    int arr[5]={25,7,12,-4,69},smallest=INT8_MAX,biggest=INT_FAST8_MIN;

    for(int i=0;i<5;i++){
        smallest=min(arr[i],smallest);
        biggest=max(arr[i],biggest);
    }
    cout<<smallest<<endl;
    cout<<biggest<<endl;
    return 0;
}