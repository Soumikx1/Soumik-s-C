#include <stdio.h>
int main() {
    int factorial, i, number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    factorial = number;
    for (i = number; i <= number; i++) {
        factorial = factorial * i;
    }
    printf("Factorial of %d is %d\n", number, factorial);
    return 0;
}