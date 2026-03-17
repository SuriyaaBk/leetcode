long long maxTotalValue(int* nums, int numsSize, int k) {
    int max = nums[0], min = nums[0];
    for(int i = 1; i < numsSize; i++) {
        max = fmax(max, nums[i]);
        min = fmin(min, nums[i]);
    }
    return ((long long) max - min) * k;
}