#include <stdio.h>
int main() {
    int a[2][2], i, j, sum = 0;
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum += a[i][j];
        }
    }
    printf("Sum of all elements in the matrix is: %d", sum);
    return 0;
}