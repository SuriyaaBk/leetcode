bool isMiddleElementUnique(int* nums, int numsSize) {
    int c = 0, n = nums[numsSize / 2];
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == n) c++;
    }
    return c == 1;
}