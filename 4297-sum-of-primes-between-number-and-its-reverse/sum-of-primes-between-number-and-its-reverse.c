int rev(int n) {
    int r = 0;
    while(n > 0) {
        r = r * 10 + (n % 10);
        n /= 10;
    }
    return r;
}
int isPrime(int n) {
    if(n == 0 || n == 1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 3; i*i <= n; i+=2) {
        if(n % i == 0) return 0;
    }
    return 1;
}
int sumOfPrimesInRange(int n) {
    int r = rev(n), j = fmax(n, r), ans = 0;
    for(int i = fmin(n, r); i <= j; i++) {
        if(isPrime(i)) ans += i;
    }
    return ans;
}