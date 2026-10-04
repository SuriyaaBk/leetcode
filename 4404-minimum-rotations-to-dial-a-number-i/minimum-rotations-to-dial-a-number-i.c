int minRotations(char* s) {
    int diff = fmin(abs(s[0] - '0'), 10 - abs(s[0] - '0')), ans = diff;
    for(int i = 1; i < 10; i++) {
        diff = abs(s[i] - s[i - 1]);
        ans += fmin(diff, 10 - diff);
    }
    return ans;
}