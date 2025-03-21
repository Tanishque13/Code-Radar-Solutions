// Your code here...
#include<stdio.h>
int main(){
    int n,i;
    int freq[1000]={0};
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[arr[i]]++;

    }
    int greater=arr[0];

    for(i=0;i<n;i++){
        if(freq[arr[i]]!=0){
            if(freq[arr[i]]>=freq[greater]){
                greater=arr[i];
                


            }
            //freq[arr[i]]=0;
            

        }
    }
    int maxFreq = freq[greater];  

    if (maxFreq > 1) {
        printf("%d", greater);
    } else {
        printf("-1");
    }
}
    


