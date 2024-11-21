#include<iostream>
using namespace std;

int main() {
    int guess,random;
    cout<<"Enter guess: ";
    cin>>guess;
    random=rand()%3+1;
    if(guess==random){
        cout<<"Congrats. You are succeded";
    }
    else{
        cout<<"Failed";
    }
}
