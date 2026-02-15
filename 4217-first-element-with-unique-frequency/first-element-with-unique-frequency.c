int firstUniqueFreq(int* nums, int numsSize) {
    int* hash = (int*)calloc(100001, sizeof(int));
    int* freq = (int*)calloc(100001, sizeof(int));
    int ans = -1;
    for(int i = 0; i < numsSize; i++) hash[nums[i]] += 1;
    for(int i = 1; i < 100001; i++) freq[hash[i]] += 1;
    for(int i = 0; i < numsSize; i++) {
        if(freq[hash[nums[i]]] == 1) {
            ans = nums[i];
            break;
        }
    }
    free(hash);
    free(freq);
    return ans;
}