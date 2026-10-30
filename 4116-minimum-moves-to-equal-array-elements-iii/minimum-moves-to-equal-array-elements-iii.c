int minMoves(int* nums, int numsSize) {
    int max = nums[0], ans = 0;
    for(int i = 1; i < numsSize; i++) max = fmax(max, nums[i]);
    for(int i = 0; i < numsSize; i++) ans += max - nums[i];
    return ans;
}