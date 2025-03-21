// Your code here...
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    //int swap=-1;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                //swap=0;
            }
        }
    }
    /*
    if(swap){
        printf("-1");
    }else{
        printf("%d",arr[j]);
    }
*/
    printf("%d",arr[j-2]);
    
    
    
    

}