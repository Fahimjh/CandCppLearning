#include<iostream>
using namespace std;

bool powOf2(int n){
    if (n <= 0) return false; // 0 and negative numbers are not powers of 2
    return (n & (n - 1)) == 0; // A power of 2 has only one bit set
}

int main(){
    int num;
    // cout << "Enter a number: ";
    // cin >> num;
    //cout << (powOf2(num) ? "True" : "False") << endl;
    cout<<5&4;

}
