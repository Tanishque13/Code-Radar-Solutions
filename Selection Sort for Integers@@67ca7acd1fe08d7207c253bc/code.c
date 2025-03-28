// Your code here...
void selectionSort(arr[],n){
    for (int i = 0; i < n - 1; i++) {  // Number of passes
        for (int j = 0; j < n - i - 1; j++) {  // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
}