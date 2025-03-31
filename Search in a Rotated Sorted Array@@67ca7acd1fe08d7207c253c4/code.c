// Your code here...
int searchInRotatedArray(int arr[],int k,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
        else{
            return -1;
        }
    }
}