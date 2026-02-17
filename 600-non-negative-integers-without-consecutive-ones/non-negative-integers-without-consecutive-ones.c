int findIntegers(int n) {
    int ans = 0, a = 1, b = 2;
    n += 1;
    while(n > 0) {
        if((n & 3) == 3) ans = 0;
        ans += a * (n & 1);
        int c = b;
        b = a + b;
        a = c; 
        n >>= 1;
    }
    return ans;
}