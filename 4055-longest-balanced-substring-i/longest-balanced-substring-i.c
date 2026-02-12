int longestBalanced(char* s) {
    int* freq = (int*)calloc(26, sizeof(int));
    int ans = 0;
    for(int i = 0; s[i]; i++) {
        for(int k = 0; k < 26; k++) freq[k] = 0;
        int uniq = 0, maxC = 1, maxF = 0;
        for(int j = i; s[j]; j++) {
            int F = freq[s[j] - 'a'] += 1;
            uniq += (F == 1);
            if(F > maxF) {
                maxF = F;
                maxC = 1;
            } else if(F == maxF) maxC += 1;
            if(uniq == maxC) ans = fmax(ans, j - i + 1);
        }
    }
    free(freq);
    return ans;
}