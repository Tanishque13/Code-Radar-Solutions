// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int flag = 1;  

   
    scanf("%s", str);

    int length = strlen(str);

    
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            flag = 0;  
            break;
        }
    }

    
    if (flag) {
        printf("Yes\n");  
    } else {
        printf("No\n");  
    }

    return 0;
}
