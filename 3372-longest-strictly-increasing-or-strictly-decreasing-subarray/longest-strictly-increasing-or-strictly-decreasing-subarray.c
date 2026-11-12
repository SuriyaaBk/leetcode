int longestMonotonicSubarray(int* nums, int numsSize) {
    int ans = 1, inc = 1, dec = 1;
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] > nums[i - 1]) {
            inc++;
            dec = 1;
        } else if(nums[i] < nums[i - 1]) {
            dec++;
            inc = 1;
        } else {
            inc = 1;
            dec = 1;
        }
        ans = fmax(ans, fmax(inc, dec));
    }
    return ans;
}