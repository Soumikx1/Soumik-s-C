#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int root;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    root = sqrt(num);

    if (root * root == num)
        printf("%d is a perfect square.\n", num);
    else
        printf("%d is not a perfect square.\n", num);

    return 0;
}