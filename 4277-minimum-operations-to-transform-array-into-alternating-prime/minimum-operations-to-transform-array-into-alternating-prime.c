int isPrime(int n) {
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 3; i*i <= n; i+=2) {
        if(n % i == 0) return 0;
    }
    return 1;
}
int minOperations(int* nums, int numsSize) {
    int ans = 0;
    for(int i = 0; i < numsSize; i++) {
        int n = nums[i];
        if(i & 1) {
            while(isPrime(n)) n++; 
        } else {
            while(!(isPrime(n))) n++;
        }
        ans += n - nums[i];
    }
    return ans;
}