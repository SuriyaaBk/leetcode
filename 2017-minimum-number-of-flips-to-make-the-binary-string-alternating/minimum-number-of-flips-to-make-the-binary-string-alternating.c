int minFlips(char* s) {
    int a[2] = {0, 0};
    int ans = 100000, x = 0, y = 0;
    for(int i = 0; s[i]; i++, x ^= 1) {
        a[(s[i] - '0') ^ x]++;
    }
    for(int i = 0; s[i]; i++, x ^= 1, y ^= 1) {
        a[(s[i] - '0') ^ y]--;
        a[(s[i] - '0') ^ x]++;
        ans = fmin(ans, fmin(a[0], a[1]));
    }
    return ans;
}