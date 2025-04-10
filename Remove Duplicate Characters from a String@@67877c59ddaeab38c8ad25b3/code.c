// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;
    int freq[256] = {0};

    // Read input with spaces
    scanf(" %[^\n]", str);

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Print characters that appear only once
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 2) {
            printf("%c", str[i]);
        }
    }

    return 0;
}
