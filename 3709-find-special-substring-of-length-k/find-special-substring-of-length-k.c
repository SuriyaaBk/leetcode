bool hasSpecialSubstring(char* s, int k) {
    int c = 1;
    for(int i = 1; s[i]; i++, c++) {
        if(s[i] != s[i - 1]) {
            if(c == k) return true;
            c = 0;
        }
    }
    if(c == k) return true;
    return false;
}