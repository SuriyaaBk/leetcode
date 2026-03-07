int minFlips(char* s) {
    int a[2] = {0, 0};
    int ans = INT_MAX, x = 0, y = 0, n = 0;
    for(n = 0; s[n]; n++, x ^= 1) {
        a[(s[n] - '0') ^ x]++;
    }
    for(int i = 0; i < n; i++, x ^= 1, y ^= 1) {
        a[(s[i] - '0') ^ y]--;
        a[(s[i] - '0') ^ x]++;
        ans = fmin(ans, fmin(a[0], a[1]));
    }
    return ans;
}