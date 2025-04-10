// Your code here...
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char str[100];
    scanf(" %[^\n]", str); // read full line

    int len = strlen(str);
    int result = (int)pow(len, 2);

    printf("%d\n", result);
    return 0;
}
