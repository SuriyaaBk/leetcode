int maxRotateFunction(int* nums, int numsSize) {
    int f = 0, sum = 0;
    for(int i = 0; i < numsSize; i++) {
        sum += nums[i];
        f += i * nums[i];
    }
    int max = f;
    for(int k = 1; k < numsSize; k++) {
        f = f + sum - (numsSize * nums[numsSize - k]);
        max = fmax(max, f);
    }
    return max;
}