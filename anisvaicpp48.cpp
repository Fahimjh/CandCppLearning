#include<iostream>
using namespace std;
int main(){
    int arr[5][5],r,c,i,j;
    cout<<"Enter value of row and column: ";
    cin>>r>>c;
    cout<<"Enter array values: ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
            cout<<"\n"<<arr[i][j];

        }
    }
}