int* findOriginalArray(int* changed, int changedSize, int* returnSize) {
    int* hash = (int*)calloc(200001, sizeof(int));
    int* ans = (int*)malloc(changedSize * sizeof(int));
    int j = 0;
    for(int i = 0; i < changedSize; i++) hash[changed[i]] += 1;
    for(int i = 0; i <= 100000; i++) {
        while(hash[i] > 0 && hash[2 * i] >= hash[i]) {
            ans[j++] = i;
            hash[i] -= 1;
            hash[2*i] -= 1;
        }
        if(hash[i] != 0) {
            free(hash);
            *returnSize = 0;
            return ans;
        }
    }    
    free(hash);
    *returnSize = j;
    return ans;
}