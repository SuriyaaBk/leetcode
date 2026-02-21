int isPrime(int n) {
    if(n <= 1) return 0;
    if(n != 2 && n % 2 == 0) return 0;
    for(int i = 3; i*i <= n; i+=2) {
        if(n % i == 0) return 0;
    } 
    return 1;
}
int CountOnes(int n) {
    int x = 0;
    while(n > 0) {
        if(n & 1) x += 1;
        n >>= 1;
    }
    return isPrime(x);
}
int countPrimeSetBits(int left, int right) {
    int ans = 0;
    for(int i = left; i <= right; i++) ans += CountOnes(i);
    return ans;
}