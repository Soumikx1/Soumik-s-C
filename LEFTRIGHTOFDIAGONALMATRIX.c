#include <stdio.h>
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
    printf("Elements to the left of the diagonal:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(j < i) {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
    printf("Elements to the right of the diagonal:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(j > i) {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}