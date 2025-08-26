#include<iostream>
using namespace std;

pair<int,int> linSearch(int matrix2d[][3],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix2d[i][j]==key){
                return {i,j};
                break;
            }
        }
    }
    return {-1,-1};
}

int main(){
    int matrix2d[3][3],row=3,col=3,key;
    cout<<"Enter array values: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix2d[i][j];
        }
    }
    cout<<"Enter key: ";
    cin>>key;
    pair<int,int> pos=linSearch(matrix2d,row,col,key);
     cout << "(" << pos.first << ", " << pos.second << ")" << endl;
}