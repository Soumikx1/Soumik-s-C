#include <stdio.h>
int main() {
    int rows, cols, i, j, element, found = 0;
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
    printf("Enter the element to search: ");
    scanf("%d", &element);
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(matrix[i][j] == element) {
                found = 1;
                break;
            }
        }
        if(found) {
            break;
        }
    }
    if(found) {
        printf("Element %d found in the matrix.\n", element);
    } else {
        printf("Element %d not found in the matrix.\n", element);
    }
    return 0;
}