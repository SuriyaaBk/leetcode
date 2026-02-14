int numberOfSubstrings(char* s, int k) {
    int ans = 0;
    int* hash = (int*)malloc(26 * sizeof(int));
    for(int i = 0; s[i]; i++) {
        int n = 0;
        for(int k = 0; k < 26; k++) hash[k] = 0;
        for(int j = i; j >= 0; j--) {
            hash[s[j] - 'a'] += 1;
            n = fmax(n, hash[s[j] - 'a']);
            if(n >= k) ans += 1;
        }
    }
    return ans;
}