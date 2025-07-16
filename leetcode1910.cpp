#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "DAlgorithmsta Structures and Algorithms";
    string keyword = "Algorithms";

    size_t pos = s.find(keyword);
    if (pos != string::npos) {
        s.erase(pos, keyword.length());
    }
    cout<<s<<endl;
    return 0;
}
