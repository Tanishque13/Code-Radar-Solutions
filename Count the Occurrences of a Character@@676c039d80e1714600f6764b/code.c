// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char x;
    scanf("%[^\n]",&str1);
    scanf("%c",&x);
    int freq[256]={0};
    for(int i=0;i<strlen(str1);i++){
        freq[str1[i]]++;

    }
    int found =1;
    for(int i=0;i<strlen(str1);i++){
        if(x!=st1r[i]){
            found=0;
            break;

        }
    }
    if(found){
        printf("%d",str[i]);
    }

}