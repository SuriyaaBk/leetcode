/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findValidElements(int* nums, int numsSize, int* returnSize) {
    int* right = (int*)malloc(numsSize * sizeof(int));
    int* ans = (int*)malloc(numsSize * sizeof(int));
    int left = nums[0], ind = 0, n = numsSize - 1;
    ans[0] = nums[0], right[n] = nums[n];
    for(int i = n - 1; i >= 0; i--) right[i] = fmax(nums[i], right[i+1]);
    for(int i = 1; i < n; i++) {
        if(nums[i] > left || nums[i] > right[i+1]) ans[++ind] = nums[i];
        left = fmax(left, nums[i]);
    }
    if(numsSize != 1) ans[++ind] = nums[n];
    free(right);
    *returnSize = ind + 1;
    return ans;
}