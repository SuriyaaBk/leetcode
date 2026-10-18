int minDeletions(int* nums, int numsSize) {
    int ans = 0;
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] == nums[i - 1]) ans++;
    }
    return ans;
}