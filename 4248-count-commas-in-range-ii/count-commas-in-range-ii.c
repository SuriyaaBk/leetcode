long long countCommas(long long n) {
    long long ans = 0, i;
    for(i = 1000; i <= n; i *= 1000) {
        ans += (n - i + 1);
    }
    return ans;
}