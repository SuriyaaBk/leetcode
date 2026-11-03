int minMergedInteger(int* nums, int numsSize) {
    int ans = INT_MAX;
    for(int i = 0; i < numsSize; i += 2) {
        int val = nums[i], n = nums[i + 1], a = n / 10, x = 1;
        while(a > 0) {
            x *= 10;
            a /= 10;
        }
        while(x > 0) {
            val = val * 10 + (n / x); 
            n %= x;
            x /= 10;
        }
        ans = fmin(ans, val);
    } 
    return ans;
}