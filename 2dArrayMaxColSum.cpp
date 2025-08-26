#include<iostream>
using namespace std;

int maxColSum(int Arr2d[][3],int row,int col){
    int maxCSum=0,sum=0,count=0;
    for(int i=0;i<row; i++){
        sum=0;
        for(int j=0;j<col;j++){
            sum+=Arr2d[j][i];
        }
        maxCSum=max(maxCSum,sum);
    }
    return maxCSum;
}

int main(){
    int Arr2d[3][3]={
        {1,2,4},
        {3,5,6},
        {9,8,4}};
    int row=3,col=3;

    cout<<maxColSum(Arr2d,row,col)<<endl;
}