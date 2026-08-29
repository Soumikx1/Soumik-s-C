#include<stdio.h>
int main() {
    int a[2][2], trans[2][2], i, j;
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            trans[j][i] = a[i][j];
        }
    }
    printf("Transposed matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}