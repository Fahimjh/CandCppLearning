#include<iostream>
using namespace std;

int diagonalSum(int mat2d[][3],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=mat2d[i][i];
        if(i!=n-i-1){
            sum+=mat2d[i][n-i-1];
        }
    }
    return sum;
}

int main(){
    int mat2d[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
        //{13,14,15,16}
    },n=3;
    cout<<"Diagonal Sum: "<<diagonalSum(mat2d,n)<<endl;
}