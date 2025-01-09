#include <iostream>
#include <string>
#include<limits>

using namespace std;

class Student {
public:
    string name;
    int age;
    char id[12];

    void setInfo() {
        cout << "Enter name: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear any leftover characters in the buffer
        getline(cin, name);  // Read the full name including spaces

        cout << "Enter age: ";
        cin >> age;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the newline character left in the buffer

        cout << "Enter id: ";
        cin.getline(id, 12);  // Read the id (up to 11 characters + null terminator)
    }

    void getInfo() {
        cout << "Your name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
    }
};

int main() {
    Student std1, std2, std3;

    std1.setInfo();
    std1.getInfo();
    std2.setInfo();
    std2.getInfo();
    std3.setInfo();
    std3.getInfo();

    return 0;
}
