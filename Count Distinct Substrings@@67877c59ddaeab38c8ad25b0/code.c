#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    // Read string with spaces
    scanf(" %[^\n]", str);
    
    int n = strlen(str);
    int totalSubstrings = n * (n + 1) / 2;

    printf("%d\n", totalSubstrings);
    
    return 0;
}
