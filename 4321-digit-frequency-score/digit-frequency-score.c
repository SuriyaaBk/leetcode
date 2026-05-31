int digitFrequencyScore(int n) {
    int ans = 0, x = n;
    while(x > 0) {
        ans += x % 10;
        x /= 10;
    }
    return ans; 
}