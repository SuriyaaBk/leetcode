int maxRotateFunction(int* nums, int numsSize) {
    long f = 0, sum = 0;
    for(int i = 0; i < numsSize; i++) {
        sum += nums[i];
        f += (long) i * nums[i];
    }
    long max = f;
    for(int k = 1; k < numsSize; k++) {
        f = f + sum - ((long) numsSize * nums[numsSize - k]);
        max = fmax(max, f);
    }
    return max;
}