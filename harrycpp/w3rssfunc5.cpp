#include<iostream>
using namespace std;
int fact(int num){
    int factorial=1;
        while(num>=1){
            factorial=factorial*num;
            num--;
        }
    return factorial;
}
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+fact(i)/i;
        //cout<<"sum= "<<sum<<" factorial= "<<fact(i)<<endl;
    }
    cout<<"THe sum of the series is : "<<sum<<endl;
}