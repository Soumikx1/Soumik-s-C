#include<stdio.h>
int main() {
    int a[2][2], b[2][2], trans[2][2], rows, columns, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            trans[j][i] = a[i][j];
        }
    }
    printf("Transposed matrix:\n");
    for(i = 0; i < columns; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}