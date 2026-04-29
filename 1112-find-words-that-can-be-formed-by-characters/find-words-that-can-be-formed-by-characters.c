int countCharacters(char** words, int wordsSize, char* chars) {
    int* hash = (int*)malloc(26 * sizeof(int));
    int* freq = (int*)malloc(26 * sizeof(int));
    for(int i = 0; i < 26; i++) hash[i] = freq[i] = 0;
    for(int i = 0; chars[i]; i++) hash[chars[i] - 'a']++;
    int ans = 0;
    for(int j, i = 0; i < wordsSize; i++) {
        for(j = 0; words[i][j]; j++) {
            int ind = words[i][j] - 'a';
            freq[ind]++;
            if(freq[ind] > hash[ind]) {
                j = 0;
                break;
            }
        }
        ans += j;
        for(int k = 0; k < 26; k++) freq[k] = 0;
    }
    free(hash);
    free(freq);
    return ans;
}