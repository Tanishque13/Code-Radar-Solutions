// Your code here...
void printArray(char arr[],int j){
    printf("%d",arr[j]);

}
int selectionSort(char arr[],int n){
    int j;
    for(int i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                char temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    return 0;
    

}
