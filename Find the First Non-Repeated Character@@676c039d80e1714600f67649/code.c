// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];         // array to store input string
    int i, count[256] = {0}; // count array for all ASCII characters (256 total)

    // Read the input string (with spaces)
    scanf(" %[^\n]", s);

    // Step 1: Count how many times each character appears
    for(i = 0; s[i] != '\0'; i++) {
        count[(int)s[i]]++;   // convert character to ASCII index and increment
    }

    // Step 2: Find the first character with count 1
    for(i = 0; s[i] != '\0'; i++) {
        if(count[(int)s[i]] == 1) {
            printf("%c", s[i]); // found the first non-repeated character
            return 0;
        }
    }

    // If all characters repeat
    printf("-");
    return 0;
}
