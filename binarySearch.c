#include <stdio.h>

// Binary search function
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the key is present at mid
        if (arr[mid] == key)
            return mid;

        // If key greater
        if (arr[mid] < key)
            left = mid + 1;

        // If key is smaller
        else
            right = mid - 1;
    }
    // Key not found(nicher return -1 tukur dorkar nai jehetu element 33 diye dise r oita array te ache)
    return -1;
}

int main() {
    int arr[] = {10, 14, 19, 26, 27, 31, 33, 35, 42, 44};//(dhore nilam array ascending order e sorted ache)
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 45;
    int result = binarySearch(arr, 0, n - 1, key);

    if (result == -1)//(ei if ero dorkar nai jehetu element 33 pawa jabe.jodi eirokom kono scenario ashe j element pawa jabena tokhon diben)
        printf("Element %d is not present in the array.\n", key);

    else
        printf("Element %d is present at index %d.\n", key, result);
    return 0;
}
