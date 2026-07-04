bool isMiddleElementUnique(int* nums, int numsSize) {
    int n = numsSize / 2, x = nums[n];
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == x && i != n) return false;
    }
    return true;
}