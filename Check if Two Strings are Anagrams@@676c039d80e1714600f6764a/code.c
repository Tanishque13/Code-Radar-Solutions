// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    scanf("%[^\n]",&str1);
    scanf("%[^\n]",&str2);
    int freq1[256]={0};
    int freq2[256]={0};
    for(int i=0;i<strlen(str1);i++){
        freq1[str1[i]]++;

    }
    for(int j=0;j<strlen(str2);j++){
        freq2[str2[j]]++;
    }
    for(int i=0;i<256;i++){
        if(freq1[i]!=freq2[i]){
            printf("No");
            break;
        }
    }
    printf("Yes");
    




    
        
}
