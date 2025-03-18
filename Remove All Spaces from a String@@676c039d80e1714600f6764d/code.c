// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    //str[strcspn(str, " ")] = '\0';
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            strcat(str1,str1[i]);
        }
    }
    printf("%s",str);
}