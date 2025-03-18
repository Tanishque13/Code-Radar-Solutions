// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    
    fgets(str,sizeof(str),stdin);
    char x,y;
    scanf("%c",&x);
    scanf("%c",&y);
    str[strcspn(str,'x')]='y';
    printf("%s",str);
}