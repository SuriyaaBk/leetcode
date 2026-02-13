char* getSmallestString(char* s) {
    for(int i = 0; s[i + 1]; i++) {
        int a = s[i] - 'a';
        int b = s[i + 1] - 'a';
        if(a > b && a % 2 == b % 2) {
            char ch = s[i];
            s[i] = s[i + 1];
            s[i + 1] = ch;
            break;
        } 
    }
    return s;
}