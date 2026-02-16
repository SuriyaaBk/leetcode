int maximumJumps(int* nums, int numsSize, int target) {
    int dp[numsSize];
    dp[0] = 0;
    for(int i = 1; i < numsSize; i++) {
        dp[i] = -1;
        for(int j = 0; j < i; j++) {
            if(abs(nums[i] - nums[j]) <= target && dp[j] != -1) dp[i] = fmax(dp[i], dp[j] + 1);
        }
    }
    return dp[numsSize - 1];
}