// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);

    }
    int count1=0;
    int count2=0;
    for(int j=1;j<=n;j++){
        if(arr[j]%2==0){
            count1++;
            

        }else{
            count2++;
            
        }


    }
    printf("%d ",count1);
    printf("%d",count2);
    
}