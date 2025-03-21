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
    int greater=-1;
    for(i=0;i<n;i++){
        if(freq[arr[i]]!=0){
            if(greater<freq[arr[i+1]] || greater==freq[arr[i+1]]){
            greater=arr[i+1];
            freq[arr[i]]=0;
            printf("%d",arr[i]);
            return 0;

        }
        else{
            printf("-1");
        }
    }
    


}
}