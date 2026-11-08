long long countValidSubstrings(char* s) {
    long long ans = 3, c = 3;
    int n = strlen(s);
    if(n < 3) return n | 1;
    for(int i = 2; i < n; i++, c++) {
        if(s[i - 2] == 'a' && s[i - 1] == 'b' && s[i] == 'c') c = 2;
        ans += c; 
    }
    return ans;
}