#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void insertionSort(vector<int>& vec){
    for(int i=0;i<vec.size();i++){
        int curr=vec[i];
        int prev=i-1;

        while(prev>=0 && vec[prev]>curr){
            vec[prev+1]=vec[prev];
            prev--;
        }
        vec[prev+1]=curr;
    }
}

void printArr(vector<int>& vec){
    for(int i=0;i<vec.size();i++){
        cout<<"arr["<<i<<"]="<<vec[i]<<endl;
    }
}

int main(){
    vector<int>vec={5,4,3,2,1};
    insertionSort(vec);
    printArr(vec);
}