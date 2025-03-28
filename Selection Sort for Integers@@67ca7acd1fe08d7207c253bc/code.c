// Your code here...
void selectionSort(arr[],n){
    int smallest=arr[0];
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[i]>smallest){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }

        }
        

    }
    printf("%d",arr[j+1]);
}