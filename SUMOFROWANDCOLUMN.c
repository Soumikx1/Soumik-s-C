#include <stdio.h>
int main() {
    int rows, cols, i, j, sumrow, sumcol;
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
    printf("Sum of each row:\n");
    for(i = 0; i < rows; i++) {
        sumrow = 0;
        for(j = 0; j < cols; j++) {
            sumrow += matrix[i][j];
        }
        printf("Row %d: %d\n", i + 1, sumrow);
    }
    printf("Sum of each column:\n");
    for(j = 0; j < cols; j++) {
        sumcol = 0;
        for(i = 0; i < rows; i++) {
            sumcol += matrix[i][j];
        }
        printf("Column %d: %d\n", j + 1, sumcol);
    }
    return 0;
}