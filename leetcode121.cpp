#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>prices={7,6,4,3,1};
    int min=prices[0],mp=0,i;
    //cout<<min<<max<<endl;
    for(i=0; i<prices.size(); i++){
        if(prices[i]<min){
            min=prices[i];
            //cout<<"min: "<<min;
        }
        //cout<<" i: "<<i<<endl;
        mp=max(mp,prices[i]-min);
    }
    cout<<mp;
    return 0;
}