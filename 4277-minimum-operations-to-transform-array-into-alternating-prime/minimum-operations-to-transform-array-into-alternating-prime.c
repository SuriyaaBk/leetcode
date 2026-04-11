int minOperations(int* nums, int numsSize) {
    int ans = 0;
    int* prime = (int*)calloc(100004, sizeof(int));
    prime[1] = 1;
    for(long i = 2; i <= 100003; i++) {
        if(prime[i] == 0) {
            for(long j = i*i; j <= 100003; j+=i) prime[j] = 1;
        }
    }
    for(int i = 0; i < numsSize; i+=2) {
        int n = nums[i], m = n;
        while(prime[m] == 1) m++;
        ans += m - n;
    }
    for(int i = 1; i < numsSize; i+=2) {
        int n = nums[i], m = n;
        while(prime[m] == 0) m++;
        ans += m - n;
    }
    free(prime);
    return ans;
}