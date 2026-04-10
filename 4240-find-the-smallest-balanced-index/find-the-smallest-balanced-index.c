int smallestBalancedIndex(int* nums, int numsSize) {
    long long sum = 0, pro = 1;
    for(int i = 0; i < numsSize; i++) sum += nums[i];
    for(int i = numsSize - 1; i >= 0; i--) {
        sum -= nums[i];
        if(sum == pro) return i;
        if(pro  >= LONG_MAX / nums[i]) return -1;
        pro *= nums[i];
    }
    return -1;
}