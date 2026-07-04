int maxValidPairSum(int* nums, int numsSize, int k) {
    int ans = 0;
    for(int i = 1; i < k; i++) nums[i]  =fmax(nums[i], nums[i - 1]);
    for(int i = k; i < numsSize; i++) {
        ans = fmax(ans, nums[i] + nums[i - k]);
        nums[i] = fmax(nums[i], nums[i - 1]);
    }
    return ans;
}