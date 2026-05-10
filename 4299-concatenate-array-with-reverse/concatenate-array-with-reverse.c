int* concatWithReverse(int* nums, int numsSize, int* returnSize) {
    int n = 2 * numsSize;
    int* ans = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < numsSize; i++) {
        ans[i] = ans[n-i-1] = nums[i];
    }
    *returnSize = n;
    return ans;
}