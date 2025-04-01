// Your code here...
#include<stdio.h>
int main(){
    int i,j,n;
    int freq[1000]={0};
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
        freq[arr[i]]++;
    }
    int max_freq=freq[0];
    for(i=0;i<n;i++){
        if(freq[arr[i]]>max_freq){
            max_freq=freq[i];
        



    }
    printf("%d",max_freq);
}
}