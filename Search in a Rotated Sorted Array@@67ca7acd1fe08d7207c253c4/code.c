// Your code here...
int searchInRotatedArray(int arr[],int n,int k){
    if(k>n){
        printf("-1");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

                
            }
        }
    }
    return ("%d",arr[k-1]);
}