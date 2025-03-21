// Your code here...
#include<stdio.h>
int main(){
    int n,i;
    freq[1000]={0};
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[arr(i)]++;

    }
    for(i=0;i<n;i++){
        if(freq[arr[i]]!=0){
            printf("5d %d\n",arr[i],freq[arr[i]]);
            freq[arr[i]]=0;

        }
    }

}