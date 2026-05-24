int* limitOccurrences(int* nums, int numsSize, int k, int* returnSize) {
    int c = 1, j = 1;
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] == nums[i - 1]) {
            if(c == k) continue;
            else c++;
        } else c = 1;
        nums[j++] = nums[i];
    }    
    *returnSize = j;
    return nums;
}