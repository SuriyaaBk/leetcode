int minOperations(char* s) {
    int ans = 0;
    for(int i = 0; s[i]; i++) {
        ans = fmax(ans, (26 - (s[i] - 'a')) % 26);
    }
    return ans;
}