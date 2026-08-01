int countValidPrefixes(char* s) {
    int ans = 0, ones = 0, zeros = 0;
    for(int i = 0; s[i]; i++) {
        if(s[i] == '0') zeros++;
        else ones++;
        if(abs(ones - zeros) <= 1) ans++;
    }
    return ans;
}