/#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    // Read a line including spaces
    scanf(" %[^\n]", str);

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Find and print the first character that appears only once
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 1) {
            printf("%c\n", str[i]);
            return 0;
        }
    }

    // If no unique character found
    printf("-");
    return 0;
}
