#include <stdio.h>
int main() {
    int NUMBER[3][3] = {{23, 31, 45}, {10, 22, 34}, {8, 32, 1}};
    int row=3,col=3,key,check=0,element=0;
    printf("Array before deletion: \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", NUMBER[i][j]);
        }
        printf("\n");
    }
    printf("Enter the element you want to delete for: ");
    scanf("%d", &key);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (NUMBER[i][j] == key) {
                while(i<row){
                    for (int k = j; k < col; k++) {//array theke actually element delete kora jayna. shokale bujhaye dibone kno jayna
                        NUMBER[i][k] = NUMBER[i][k + 1];
                    }    
                i++;
                j=0;
                }
            check++;
            break;
            }
        }
        if(check>0){
            break;
        }
    }
    if (check==0) {
        printf("Element %d not found in the array.\n", key);
        return 0;
    }
    printf("Array after deletion: \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", NUMBER[i][j]);
            element++;
            if(element==8){
                return 0;
            }
        }
        printf("\n");
    }
}
