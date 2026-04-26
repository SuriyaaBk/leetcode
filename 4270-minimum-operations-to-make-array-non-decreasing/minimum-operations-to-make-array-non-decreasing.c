long long minOperations(int* nums, int numsSize) {
    long long ans = 0;
    for(int i = 1; i < numsSize; i++) ans += fmax(0, nums[i-1] - nums[i]);
    return ans;
}