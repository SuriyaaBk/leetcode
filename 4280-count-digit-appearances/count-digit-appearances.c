int calculate(int n, int k) {
    int c = 0;
    while(n > 0) {
        if((n % 10) == k) c++;
        n /= 10;
    }
    return c;
}
int countDigitOccurrences(int* nums, int numsSize, int digit) {
    int ans = 0;
    for(int i = 0; i < numsSize; i++) {
        ans += calculate(nums[i], digit);
    }
    return ans;
}