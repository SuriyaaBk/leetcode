int minMoves(int* nums, int numsSize) {
    int max = nums[0], sum = nums[0];
    for(int i = 1; i < numsSize; i++) {
        max = fmax(max, nums[i]);
        sum += nums[i];
    }
    return max * numsSize - sum;
}