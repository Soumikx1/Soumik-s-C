#include<stdio.h>
int main() {
    int a[100], i, j, temp;
printf("Enter the number of elements in the array: ");
    scanf("%d", &i);
    printf("Enter the elements of the array:\n");
    for(j = 0; j < i; j++) {
        scanf("%d", &a[j]);
    }
    for(j = 0; j < i - 1; j++) {
        for(int k = 0; k < i - j - 1; k++) {
            if(a[k] > a[k + 1]) {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
    }
    printf("The sorted array is:\n");
    for(j = 0; j < i; j++) {
        printf("%d ", a[j]);
    }
    printf("\n");
    return 0;
}