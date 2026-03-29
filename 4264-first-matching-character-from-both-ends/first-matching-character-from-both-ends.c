int firstMatchingIndex(char* s) {
    int n = strlen(s), i = 0, j = n - 1;
    while(i <= j) {
        if(s[i] == s[j]) return i;
        i++;
        j--;
    }
    return -1;
}