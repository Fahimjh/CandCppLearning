#include<iostream>
#include<cctype>
using namespace std;
bool check(char ch){
    if(ch >= 97 && ch <= 122 || ch >= 30 && ch <= 39)
    return true;
}

int main(){
    string s;
    getline(cin,s);
    int  i = 0, j = s.length()-1;
    while(i<j){
        if(!check(s[i])){
            i++;
            continue;
        }

        if(!check(s[j])){
            j++;
            continue;
        }
        if(tolower(s[i])!=tolower(s[j])){
            return false;
        }
        i++;
        j--;
    }
    return true;
}