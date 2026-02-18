int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int left = 1, right = 1;
    int* ans = (int*)malloc(numsSize * sizeof(int));
    for(int i = 0; i < numsSize; i++) {
        ans[i] = left;
        left *= nums[i];
    }    
    for(int i = numsSize - 1; i >= 0; i--) {
        ans[i] *= right;
        right *= nums[i];
    }
    *returnSize = numsSize;
    return ans;
}