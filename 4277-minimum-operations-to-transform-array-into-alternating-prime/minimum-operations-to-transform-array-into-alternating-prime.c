int minOperations(int* nums, int numsSize) {
    int ans = 0;
    int* prime = (int*)calloc(100004, sizeof(int));
    prime[2] = 1;
    for(int i = 3; i <= 100003; i+=2) {
        int c = 1;
        for(int j = 3; j*j <= i; j+=2) {
            if(i % j == 0) {
                c = 0;
                break;
            }
        }
        prime[i] = c;
    }
    for(int i = 0; i < numsSize; i+=2) {
        int n = nums[i], m = n;
        while(prime[m] == 0) m++;
        ans += m - n;
    }
    for(int i = 1; i < numsSize; i+=2) {
        int n = nums[i], m = n;
        while(prime[m] == 1) m++;
        ans += m - n;
    }
    free(prime);
    return ans;
}