int GCD(int a, int b) {
    while(b > 0) {
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
}
long long maxPairStrength(int* nums, int numsSize) {
    long long ans = 0;
    for(int i = 0; i < numsSize; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            int gcd = GCD(nums[i], nums[j]);
            long long strength = ((long long) nums[i] * nums[j]) / ((long long) gcd * gcd);
            ans = fmax(ans, strength);
        }
    }
    return ans;
}