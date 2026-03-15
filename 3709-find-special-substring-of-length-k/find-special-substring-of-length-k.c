bool hasSpecialSubstring(char* s, int k) {
    int c = 1;
    for(int i = 1; s[i]; i++) {
        if(s[i] == s[i - 1]) c++;
        else {
            if(c == k) return true;
            c = 1;
        }
    }
    if(c == k) return true;
    return false;
}