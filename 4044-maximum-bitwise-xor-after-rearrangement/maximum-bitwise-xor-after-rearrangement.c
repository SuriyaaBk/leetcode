char* maximumXor(char* s, char* t) {
    int n, ones = 0, zeros = 0;
    for(n = 0; t[n]; n++) {
        if(t[n] == '1') ones++;
        else zeros++;
    }
    char* ans = (char*)malloc((n + 1) * sizeof(char));
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            if(ones > 0) {
                ans[i] = '1';
                ones--;
            } else ans[i] = '0';
        } else {
            if(zeros > 0) {
                ans[i] = '1';
                zeros--;
            } else ans[i] = '0';
        }
    }
    ans[n] = '\0';
    return ans;
}