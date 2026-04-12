int maximumTop(int* nums, int numsSize, int k) {
    if(numsSize == 1 && k & 1) return -1;
    int max = -1;
    for(int i = 0; i < numsSize && i < k - 1; i++) max = fmax(max, nums[i]);
    if(k < numsSize) max = fmax(max, nums[k]);
    return max;
}