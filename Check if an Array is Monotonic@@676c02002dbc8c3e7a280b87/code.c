// Your code here...
#include<stdio.h>
int main(){
    int n,i,j,temp;
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int iss=1;
    for(i=0;i<n;i++){
        if(arr[i]<=arr[i+1]||arr[i]>=arr[i+1]){
            iss=0;
            return 0;

        }
    }
    if(iss){
        printf("YES");
    }else{
        printf("NO");
    }
}