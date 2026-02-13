int parity(char c) {
    int n = (c - 'a') & 1;
    return n;
}
char* getSmallestString(char* s) {
    for(int i = 0; s[i + 1]; i++) {
        if(parity(s[i]) == parity(s[i + 1]) && s[i] > s[i + 1]) {
            char ch = s[i];
            s[i] = s[i + 1];
            s[i + 1] = ch;
            break;
        } 
    }
    return s;
}