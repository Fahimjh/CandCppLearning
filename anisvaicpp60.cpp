#include <iostream>
using namespace std;
void showArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    showArr(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
