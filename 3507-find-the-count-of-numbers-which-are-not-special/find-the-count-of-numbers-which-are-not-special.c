int isPrime(int n) {
    if(n <= 1) return 0;
    if(n % 2 == 0 && n != 2) return 0;
    for(int i = 3; i*i <= n; i += 2) {
        if(n % i == 0) return 0;
    }
    return 1;
}
int nonSpecialCount(int l, int r) {
    int k = 0, n = sqrt(r);
    for(int i = sqrt(l); i <= n; i++) {
        int j = i * i;
        if((isPrime(i) && j >= l && j <= r) == 1) k += 1;
    }
    return r - l + 1 - k;
}