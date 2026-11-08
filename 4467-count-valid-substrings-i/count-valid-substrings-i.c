long long countValidSubstrings(char* s) {
    long long ans = 3, c = 3;
    if(s[1] == '\0') return 1;
    if(s[2] == '\0') return 3;
    for(int i = 2; s[i] != '\0'; i++, c++) {
        if(s[i - 2] == 'a' && s[i - 1] == 'b' && s[i] == 'c') c = 2;
        ans += c; 
    }
    return ans;
}