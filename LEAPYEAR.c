#include <stdio.h>
int main() {
    int num;
    printf("Enter a year: ");
    scanf("%d", &num);
    if (num % 4 == 0)
    {
        printf("The year is a leap year.\n");
    }
    else
    {
        printf("The year is not a leap year.\n");
    }
    return 0;
}