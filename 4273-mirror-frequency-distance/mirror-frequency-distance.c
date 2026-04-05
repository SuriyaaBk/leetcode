int mirrorFrequency(char* s) {
    int* hash = (int*)calloc(128, sizeof(int));
    int ans = 0;
    for(int i = 0; s[i]; i++) hash[s[i]]++;
    for(int i = '0', j = '9'; i < j; i++, j--) {
        ans += abs(hash[i] - hash[j]);
    }
    for(int i = 'a', j = 'z'; i < j; i++, j--) {
        ans += abs(hash[i] - hash[j]);
    }
    free(hash);
    return ans;
}