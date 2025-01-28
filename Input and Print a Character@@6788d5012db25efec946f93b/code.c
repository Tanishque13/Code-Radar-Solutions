#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str;
    scanf("%c",&str);
    printf("You entered: %c",str);
    return 0;
}