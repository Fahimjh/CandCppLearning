#include<iostream>
using namespace std;
int main(){
    int n,i,max,sum=0;
    float avg;
    cout<<"Enter how many students: ";
    cin>>n;
    int students[n];
    cout<<"Enter their number: ";
    for(i=0;i<n;i++){
        cin>>students[i];
        sum=sum+students[i];
    }
    avg=sum/n;
    max=students[0];
    for(i=1;i<n;i++){
        if(students[i]>max);
        max=students[i];
    }
    cout<<"Students and their numbers: ";
    for(i=0;i<n;i++){
        cout<<"\nStudent "<<i+1<<"got "<<students[i];
    }
    cout<<"Highest mark= "<<max<<"\naverage mark= "<<avg;

}