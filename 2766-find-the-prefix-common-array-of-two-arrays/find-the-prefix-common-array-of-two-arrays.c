int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    int* ans = (int*)malloc(ASize * sizeof(int));
    int* hash = (int*)calloc(ASize, sizeof(int));
    int freq = 0;
    for(int i = 0; i < ASize; i++) {
        hash[A[i] - 1]++;
        hash[B[i] - 1]++;
        if(A[i] != B[i] && hash[A[i] - 1] == 2 && hash[B[i] - 1] == 2) freq += 2;
        else if(hash[A[i] - 1] == 2 || hash[B[i] - 1] == 2) freq += 1;
        ans[i] = freq;
    }   
    free(hash);
    *returnSize = ASize;
    return ans;
}