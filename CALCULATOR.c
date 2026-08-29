#include <stdio.h>
int main() {
    float num1, num2, result;
    char operator;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%f", &num2);
    switch (operator)
    {
        case'+':
        result = num1 + num2;
        printf("%f + %f = %f\n", num1, num2, result);
        break;
        case'-':
        result = num1 - num2;
        printf("%f - %f = %f\n", num1, num2, result);
        break;
        case'*':
        result = num1 * num2;
        printf("%f * %f = %f\n", num1, num2, result);
        break;
        case'/':
        result = num1 / num2;
        printf("%f / %f = %f\n", num1, num2, result);
        break;
        default:
        printf("Invalid operator entered.\n");
    }
    return 0;
}