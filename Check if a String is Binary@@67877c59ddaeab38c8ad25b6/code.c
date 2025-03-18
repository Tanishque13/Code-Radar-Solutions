// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int isbinar=1;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='0'||str[i!='1']){
            isbinar=0;
            break;
        }
            
    }
    if(isbinar){
        printf("Yes");
    }else{
        printf("No");
    }
}