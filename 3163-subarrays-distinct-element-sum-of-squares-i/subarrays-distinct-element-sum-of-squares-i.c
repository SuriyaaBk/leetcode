int sumCounts(int* nums, int numsSize) {
    int ans = 0;
    int* hash = (int*)calloc(101, sizeof(int));
    for(int i = 0; i < numsSize; i++) {
        int k = 0;
        for(int j = i; j >= 0; j--) {
            if(hash[nums[j]] == 0) k += 1;
            hash[nums[j]] = 1;
            ans += k * k;
        }
        for(int j = i; j >= 0; j--) hash[nums[j]] = 0;
    }
    free(hash);
    return ans;
}