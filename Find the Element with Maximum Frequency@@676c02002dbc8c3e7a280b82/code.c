// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    int n,i;
    int freq[1000]={0};
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++){
        freq[arr[i]]++;

    }
    int great=freq[arr[0]];
    for(i=0;i<n;i++){
        if(freaq[arr[i]]>great){
            great=freq[arr[i]];
        }
    }
    printf("%d",great);
}