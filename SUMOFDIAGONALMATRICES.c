#include<stdio.h>
int main() {
    int rows, cols, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
            }
    for(i = 0; i < rows && i < cols; i++) {
        printf("Sum of diagonal elements in row %d: %d\n", i, matrix[i][i]);
    }
    return 0;
}