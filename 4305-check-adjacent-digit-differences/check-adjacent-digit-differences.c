bool isAdjacentDiffAtMostTwo(char* s) {
    for(int i = 1; s[i]; i++) {
        int a = s[i] - '0', b = s[i-1] - '0';
        if(abs(a - b) > 2) return false;
    }
    return true;
}