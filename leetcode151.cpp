#include<iostream>
#include<algorithm>
using namespace std;

string reverseWords(string s) {
        int n=s.length();
        reverse(s.begin(),s.end());
        string ans="";
        
        for(int i=0; i<n; i++){
            string word="";
            while(i<n && s[i]!=' '){
                word=word+s[i];
                i++;
            }

            reverse(word.begin(), word.end());
            
            if(word.length()>0){
                ans=ans+(" "+word);
            }
        }
    return ans.substr(1);
    }

int main(){
    string s;
    getline(cin,s);
    cout<<reverseWords(s);
}