// Your code here...
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,j;
    scanf("%d",&n);
    int arr[i];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n-1;i++){

        for(j=0;j<n-1-i;j++){
            
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;


            }
            
        }

    }
    int maxProduct = arr[n - 1] * arr[n - 2]; // Largest two numbers
    if (arr[0] * arr[1] > maxProduct) {
        maxProduct = arr[0] * arr[1]; // Smallest two numbers (negative case)
    }

    // Output the maximum product
    printf("%d\n", maxProduct);

    return 0;
    
    

}
