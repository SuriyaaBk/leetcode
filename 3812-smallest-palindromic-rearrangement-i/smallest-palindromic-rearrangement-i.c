char* smallestPalindrome(char* s) {
    int n, j = 0;
    int* hash = (int*)calloc(26, sizeof(int));
    for(n = 0; s[n]; n++) {
        hash[s[n] - 'a'] += 1;
    }
    char* ans = (char*)malloc((n + 1) * sizeof(char));
    for(int i = 0; i < 26; i++) {
        if(hash[i] & 1 == 1) {
            ans[n / 2] = 'a' + i;
            hash[i] -= 1;
        }
        while(hash[i] > 0) {
            ans[j] = 'a' + i;
            ans[n - j - 1] = 'a' + i;
            j += 1;
            hash[i] -= 2;
        }
    }
    ans[n] = '\0';
    return ans;
}