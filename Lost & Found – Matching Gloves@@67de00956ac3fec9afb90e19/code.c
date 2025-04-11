// Your code here...
int countGlovePairs(int gloves[], int n) {
    int freq[101] = {0}; // Assuming color IDs range from 0 to 100
    int i, pairs = 0;

    // Count frequency of each glove color
    for (i = 0; i < n; i++) {
        freq[gloves[i]]++;
    }

    // Count pairs from frequencies
    for (i = 0; i < 101; i++) {
        pairs += freq[i] / 2;
    }

    return pairs;
}
