int minOperations(char* s) {
    int ans = 0;
    int* hash = (int*)malloc(26 * sizeof(int));
    for(int i = 0; s[i]; i++) {
        if(s[i] == 'b') return 25;
        hash[s[i] - 'a'] = 1;
    }
    for(int i = 1; i < 26; i++) {
        if(hash[i] == 1) return (26 - i) % 26;
    }
    return 0;
}