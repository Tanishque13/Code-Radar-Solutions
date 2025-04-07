// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    int freq[100]={0};
    int max_freq=freq[arr[0]];
    char ele=arr[0];
    fgets(arr,sizeof(arr),stdin);
    for(int i=0;i<strlen(arr);i++){
        freq[arr[i]]++;
        
        for(int i=0;i<strlen(arr);i++){
            if(freq[arr[i]]>max_freq){
                int max_freq=freq[arr[i]];
                char ele=arr[i];
            }
            
        }
        
       
    }
    printf("%c",ele);
    
        
        
        

    }
    