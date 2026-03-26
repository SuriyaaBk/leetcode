char* resultingString(char* s) {
    char* ans = (char*)malloc(100001 * sizeof(char));
    int len = 0;
    for(int i = 0; s[i]; i++) {
        if(len > 0 && abs(s[i] - ans[len - 1]) % 24 == 1) {
            len--;
        } else {
            ans[len++] = s[i];
        }
    }
    ans[len] = '\0';
    return ans;
}