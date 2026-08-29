#include <stdio.h>
int main() {
    int day;
    printf("Enter a number (1-7) representing the day of the week: ");
    scanf("%d", &day);
    switch (day) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("These are weekdays.\n");
        break;
    case 6:
    case 7: 
        printf("These are weekends.\n");
        break;
    default:
        printf("Invalid input. Please enter a number between 1 and 7.\n");
}
return 0;
}