int* minDistinctFreqPair(int* nums, int numsSize, int* returnSize) {
    int* freq = (int*)calloc(101, sizeof(int));
    int* ans = (int*)malloc(2 * sizeof(int));
    for(int i = 0; i < numsSize; i++) freq[nums[i]] += 1;
    int c = -1, j = 0;
    for(int i = 0; i <= 100 && j < 2; i++) {
        if(freq[i] > 0 && c != freq[i]) {
            ans[j++] = i;
            c = freq[i];
        }
    }
    if(j != 2) ans[0] = ans[1] = -1;
    free(freq);
    *returnSize = 2;
    return ans;
}