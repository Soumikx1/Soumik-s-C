#include <stdio.h>
#include <string.h>
int main() {
    char name [100];
    printf("Enter your name: ");
    scanf("%s", name);
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] >= 'a' && name[i] <= 'z') {
            name[i] = name[i] - ('a' - 'A');
        }
    }
    printf("Your name in uppercase is, %s!\n", name);
    return 0;
}