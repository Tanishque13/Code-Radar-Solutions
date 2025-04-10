// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i;
    scanf("%[^\n]",&str);
    int freq[1000]={0};
    for(i=0;str[i]!='\0';i++){
        
        printf("%c: %d",str[i],freq[(int)str[i]]++);

    }
    
}
