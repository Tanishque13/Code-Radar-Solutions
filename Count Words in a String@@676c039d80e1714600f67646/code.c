// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    int length=strlen(str);
    int count=0;
    for(int i=0;i<length;i++){
        if(str[i]==' '){
            count++;
            
        }

    }
    printf("%d",count);
    

    


}