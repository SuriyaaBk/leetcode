bool check(int* nums, int numsSize) {
    int c = 0;
    if(nums[numsSize - 1] > nums[0]) c += 1;
    for(int i = 0; i < numsSize - 1; i++) {
        if(nums[i] > nums[i + 1]) c += 1;
    }
    return c <= 1;
}