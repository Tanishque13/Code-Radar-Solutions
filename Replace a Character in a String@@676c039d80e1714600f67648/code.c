// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char x,y;
    fgets(str,sizeof(str),stdin);
    scanf("%c",&x);
    scanf("%c",&y);
    str[strcspn(str,'x')]='y';
    printf("%s",str);
}