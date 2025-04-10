// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int printed[256] = {0}; // To track if a character was already printed

    // Read the whole line including spaces
    scanf("%[^\n]", str);

    // Count frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Print in order of first appearance
    for (int i = 0; str[i] != '\0'; i++) {
        if (!printed[(int)str[i]]) {
            printf("%c: %d\n", str[i], freq[(int)str[i]]);
            printed[(int)str[i]] = 1;
        }
    }

    return 0;
}
