int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int* hash = (int*)calloc(101, sizeof(int));
    int* ans = (int*)malloc(numsSize * sizeof(int));
    int n = 0;
    for(int i = 0; i < numsSize; i++) {
        hash[nums[i]]++;
    }
    while(n < numsSize) {
        for(int i = 1; i <= 100; i++) {
            if(hash[i] > 0) {
                ans[n++] = i;
                hash[i]--;
            }
        }
    }
    free(hash);
    *returnSize = n;
    return ans;
}