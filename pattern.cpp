#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec={1,2,3,4,5};
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            for(int k=i;k<=j;k++){
                cout<<vec[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}