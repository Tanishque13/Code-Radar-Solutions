// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    int count1=0;
    int count2=0;
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    for(int i=0;str1[i]!='\0';i++){
        count1++;
        for(int j=0;str2[j]!='\0',j++){
            count2++;
            if(count1==count2){
                printf("Yes");
            }else{
                printf("No");
            }
        }
    }
}