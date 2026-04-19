int firstStableIndex(int* nums, int numsSize, int k) {
    int* min = (int*)malloc(numsSize * sizeof(int));
    min[numsSize - 1] = nums[numsSize - 1];
    for(int i = numsSize - 2; i >= 0; i--) {
        min[i] = fmin(min[i+1], nums[i]);
    }
    int max = nums[0];
    for(int i = 0; i < numsSize; i++) {
        max = fmax(max, nums[i]);
        if(max - min[i] <= k) return i;
    }
    return -1;
}