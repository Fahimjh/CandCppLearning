#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to display the 2D array
void displayArray(int arr[ROWS][COLS]) {
    printf("Updated Array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

// Function to delete an element from the 2D array
void deleteElement(int arr[ROWS][COLS], int key) {
    int i, j;
    int found = 0;

    // Searching for the element
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (arr[i][j] == key) {
                // Shift elements to the left to delete the element
                for (int k = j; k < COLS - 1; k++) {
                    arr[i][k] = arr[i][k + 1];
                }
                arr[i][COLS - 1] = 0; // Set the last element to 0 or any suitable default value
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    } else {
        printf("Element %d deleted from the array.\n", key);
    }
}

int main() {
    int NUMBER[3][3] = {{23, 31, 45}, {10, 22, 34}, {8, 32, 1}};
    int key;

    printf("Enter the element you want to delete: ");
    scanf("%d", &key);

    deleteElement(NUMBER, key);

    // Display the updated array
    displayArray(NUMBER);

    return 0;
}
