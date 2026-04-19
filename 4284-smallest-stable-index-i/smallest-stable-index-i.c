int firstStableIndex(int* nums, int numsSize, int k) {
    int max = nums[0], min;
    for(int i = 0; i < numsSize; i++) {
        max = fmax(max, nums[i]), min = nums[i];
        for(int j = i; j < numsSize; j++) {
            min = fmin(min, nums[j]);
        }
        if(max - min <= k) return i;
    }
    return -1;
}