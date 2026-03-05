int minOperations(char* s) {
    int n, c = 0, j = 0;
    for(n = 0; s[n] != '\0'; n++) {
        if(s[n] - '0' == j) c++;
        j ^= 1;
    }
    return c < n - c ? c : n - c;
}