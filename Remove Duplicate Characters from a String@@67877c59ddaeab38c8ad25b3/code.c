/#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int seen[256] = {0}; // To track already printed characters

    // Read a full line including spaces
    scanf(" %[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (!seen[(int)str[i]]) {
            printf("%c", str[i]);
            seen[(int)str[i]] = 1;
        }
    }

    return 0;
}
