// Your code here...
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n],freq[1000]={0};
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[arr[i]]++;


    }
    for(i=0;i<n;i++){
        if(freq[arr[i]]!=0){
            printf("%d %d\n",arr[i],freq[arr[i]]);
            freq[arr[i]]=0;
        }
    }
    
                
            
}

    

