#include <stdio.h>
int main() {
    int units, cost;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if(units <= 200)
    {
        cost = units * 0.50;
        printf("Total cost: %d\n", cost);
    }
    else if (units >= 201 && units <= 400)
    {
        cost = units * 0.65;
        printf("Total cost: %d\n", cost);
    }
    else if (units >= 401 && units <= 600)
    {
        cost = units * 0.80;
        printf("Total cost: %d\n", cost);
    }
    else if (units >= 601)
    {
        cost = units * 1.00;
        printf("Total cost: %d\n", cost);
    }
    else
    {
        printf("Invalid input.\n");
    }
    return 0;
}