char* mergeCharacters(char* s, int k) {
    char* ans = (char*)malloc(101 * sizeof(char));
    int* hash = (int*)malloc(26 * sizeof(int));
    for(int i = 0; i < 26; i++) hash[i] = -1;
    int j = 0;
    for(int i = 0; s[i]; i++) {
        if(hash[s[i] - 'a'] >= 0 && j - hash[s[i] - 'a'] <= k) continue;
        hash[s[i] - 'a'] = j;
        ans[j++] = s[i];
    }
    ans[j] = '\0';
    return ans;
}