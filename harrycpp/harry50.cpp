#include<iostream>
using namespace std;

int main() {
    int a = 4;
    int *ptr;
    int *ptr1;

    {
        ptr = &a; // Stack-allocated memory
        ptr1 = new int(4); // Heap-allocated memory
    }
    int *arr=new int[3];
    cout << "The value of a is " << *ptr << endl;
    cout << "The value of heap-allocated memory is " << *ptr1 << endl;
    *arr=10;
    *(arr+1)=20;
    arr[2]=30;
    // Free the dynamically allocated memory
    delete ptr1;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    delete[] arr;
    //warning: you must delete the dynamically allocated
    // memory using "new" keyword before leaving the program
    //or else it will cause memory leak and the memory will be 
    //blocked for the lifetime of the program
    return 0;
}