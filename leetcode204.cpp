#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=50,count=0;
    vector<bool>vec(n+1, true);
    for(int i=2;i<n;i++){
        if(vec[i]){
            count++;
            for(int j=i*2; j<n; j=j+i){
                vec[j]=false;
            }
        }
    }
    cout<<count<<endl;
}