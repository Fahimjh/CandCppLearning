#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& chars) {
    int n=chars.size();
    vector<char>temp;
    for(int i=0; i<n; i++){
        int count=0;char ch=chars[i];
        while(i<n && ch==chars[i]){
            count++;
            i++;
        }
        i--;
        if(count==1){
            temp.push_back(chars[i]);
        }
        else{
            temp.push_back(chars[i]);
            string s=to_string(count);
            for(auto val:s){
                temp.push_back(val);
            }
        }
    }
    chars=temp;
    return chars.size();
}

int main(){
    vector<char> chars={'a','a','b','b','c','c','c'};
    cout<<"size "<<compress(chars)<<endl;
}