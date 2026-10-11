int sumOfSquares(int* nums, int numsSize) {
    int ans = nums[0] * nums[0];
    if(numsSize != 1)  ans += nums[numsSize - 1] * nums[numsSize - 1];
    for(int i = 1; i < numsSize / 2; i++) {
        if((numsSize % (i + 1)) == 0) ans += nums[i] * nums[i];
    }
    return ans;
}