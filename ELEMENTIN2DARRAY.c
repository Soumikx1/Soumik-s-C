#include<stdio.h>
int main() {
    int a[2][2], i, j, element;
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the element to search for: ");
    scanf("%d", &element);
    int found = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (a[i][j] == element) {
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (found) {
        printf("Element %d is present in the matrix.\n", element);
    } else {
        printf("Element %d is not present in the matrix.\n", element);
    }
    return 0;
}