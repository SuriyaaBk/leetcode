bool isSubstringPresent(char* s) {
    int n = strlen(s), hash[26][26] = {};
    for(int i = 0; i < n - 1; i++) {
        int a = s[i] - 'a';
        int b = s[i + 1] - 'a';
        hash[a][b] = 1;
    }
    for(int i = n - 1; i > 0; i--) {
        int a = s[i] - 'a';
        int b = s[i - 1] - 'a';
        if(hash[a][b] == 1) return true;
    }
    return false;
}