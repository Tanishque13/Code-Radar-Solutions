// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    
    fgets(str,sizeof(str),stdin);
    char x,y;
    scanf(" %c",&x);
    scanf(" %c",&y);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==x){
            str[i]=y;
        }

    }
    printf("%s",str);
    
}