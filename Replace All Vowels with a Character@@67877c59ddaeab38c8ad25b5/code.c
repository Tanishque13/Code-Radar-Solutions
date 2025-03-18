// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char x;
    scanf(" %c",&x);
    fgets(str,sizeof(str),stdin);
    int j;
    for(int i=0;str[i]!='\0';i++){
        if(t!='A'||t!='a'||t!='E'||t!='e'||t!='I'||t!='i'||t!='O'||t!='o'||t!='U'||t!='u'){
            str[j++]=str[i];




        }
    }
    str[j]='x';
    printf("%s",str);

}