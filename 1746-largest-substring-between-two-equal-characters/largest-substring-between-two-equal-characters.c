int maxLengthBetweenEqualCharacters(char* s) {
    int ans = 0;
    int* hash = (int*)malloc(26 * sizeof(int));
    for(int i = 0; s[i]; i++) hash[s[i] - 'a'] = i;
    for(int i = 0; s[i]; i++) ans = fmax(ans, hash[s[i] - 'a'] - i);
    free(hash);
    return ans - 1;
}