// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    
    for(int i=0;str[i]!='\0';i++){
        char t= str[i];
        if(t!='A'||t!='a'||t!='E'||t!='e'||t!='I'||t!='i'||t!='O'||t!='o'||t!='U'||t!='u'){
            str[strcspn(str,'t')]='\0';

        }
    }printf("%s",str);
}