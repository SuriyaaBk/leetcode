bool canConstruct(char* s, int k) {
    int* hash = (int*)calloc(26, sizeof(int));
    int n = 0, even = 0, odd = 0;
    for(n = 0; s[n]; n++) {
        hash[s[n] - 'a'] += 1;
    }
    for(int i = 0; i < 26; i++) {
        if(hash[i] > 0) {
            if(hash[i] % 2 == 0) even += hash[i] / 2;
            else {
                even += hash[i] / 2;
                odd += 1;
            }
        }
    }
    free(hash);
    if(n < k || odd > k) return false;
    return true;
}