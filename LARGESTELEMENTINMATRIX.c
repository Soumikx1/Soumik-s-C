#include <stdio.h>
int main() {
    int a[2][2],  largest, i, j;
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    largest = a[0][0];
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (a[i][j] > largest) {
                largest = a[i][j];
            }
        }
    }
    printf("The largest element in the matrix is: %d\n", largest);
    return 0;
}