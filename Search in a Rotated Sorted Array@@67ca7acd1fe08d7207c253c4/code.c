// Your code here...
int searchInRotatedArray(int arr[], int k, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found after checking the whole array
}
