int maxDigitRange(int* nums, int numsSize) {
    int max = 0, ans = 0;
    for(int i = 0; i < numsSize; i++) {
        int cur_max = 0, n = nums[i], min_dig = 10, max_dig = 0;
        while(n > 0) {
            int digit = n % 10;
            min_dig = fmin(min_dig, digit);
            max_dig = fmax(max_dig, digit);
            n /= 10;
        }
        cur_max = max_dig - min_dig;
        if(cur_max > max) {
            ans = 0;
            max = cur_max;
        } if(max == cur_max) ans += nums[i];
    }
    return ans;
}