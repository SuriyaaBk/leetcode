bool canConstruct(char* s, int k) {
    int* hash = (int*)calloc(26, sizeof(int));
    int n = 0, odd = 0;
    for(n = 0; s[n]; n++) {
        hash[s[n] - 'a'] += 1;
    }
    for(int i = 0; i < 26; i++) {
        odd += hash[i] & 1;
    }
    free(hash);
    if(n < k || odd > k) return false;
    return true;
}