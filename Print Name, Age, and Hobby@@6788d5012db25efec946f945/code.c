#include <stdio.h>
int main(){
    char str[100];
    int age;
    char s[100];
    scanf("%s %d %s",&str,&age,&s);
    printf("Name: %s\n Age: %d\n Hobby: %s",str,age,s);
    return 0;
}