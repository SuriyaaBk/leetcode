int firstUniqueFreq(int* nums, int numsSize) {
    int ans = -1, max = 0;
    for(int i = 0; i < numsSize; i++) max = fmax(max, nums[i]);
    int* hash = (int*)calloc(max + 1, sizeof(int));
    int* freq = (int*)calloc(numsSize + 1, sizeof(int));
    for(int i = 0; i < numsSize; i++) hash[nums[i]] += 1;
    for(int i = 0; i <= max; i++) freq[hash[i]] += 1;
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