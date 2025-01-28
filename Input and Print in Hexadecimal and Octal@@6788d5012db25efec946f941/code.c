#include <stdio.h>
//%o=to convert it to octal
//%x=to convert it to hexa.
int main(){
    int num;
    scanf("%d",&num);
    printf("Hexadecimal(lowercase): %x\n",num);
    printf("Octal: %o",num);
    return 0;

}