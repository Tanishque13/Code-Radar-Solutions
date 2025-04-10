// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",&str);
    int freq[256]={0};
    for(i=0;str[i]!='\0';i++){
        freq[(int)freq[arr[i]]]++:
    }
    for(i=0;i<256;i++){
        if(freq[i]==1){
            printf("%c",str[i]);
        }
    }


}
