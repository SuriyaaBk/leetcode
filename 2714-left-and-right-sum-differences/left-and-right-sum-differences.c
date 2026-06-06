int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int* ans = (int*)malloc(numsSize * sizeof(int));
    int left_sum = 0, right_sum = 0;
    for(int i = 0; i < numsSize; i++) right_sum += nums[i];
    for(int i = 0; i < numsSize; i++) {
        left_sum += nums[i];
        ans[i] = abs(right_sum - left_sum);
        right_sum -= nums[i];
    }
    *returnSize = numsSize;
    return ans;
}