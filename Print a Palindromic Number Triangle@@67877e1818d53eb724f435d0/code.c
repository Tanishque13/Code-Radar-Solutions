// Your code here...
#include <stdio.h>

int main() {
    int x, i, j, num, sum = 0;

    
    
    scanf("%d", &num);

    int orig = num;  

    
    while (num > 0) {
        sum = sum * 10 + num % 10;
        num = num / 10;
    }

    if (sum == orig) {
        int n = orig;

        
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (i + j < n + 1) {
                    printf(" ");
                } 
            }
            for (j = 1; j <= i; j++) {  
                printf("%d", j);
            }
            for(j=i-1;j>=1;j--){
                printf("%d",j);
            }

            
            
            printf("\n"); 
        }
    } 
    return 0;
}
