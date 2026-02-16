char* smallestPalindrome(char* s) {
    int n;
    int* hash = (int*)calloc(26, sizeof(int));
    for(n = 0; s[n]; n++) {
        hash[s[n] - 'a'] += 1;
    }
    int l = 0, r = n - 1;
    char* ans = (char*)malloc((n + 1) * sizeof(char));
    for(int i = 0; i < 26; i++) {
        if(hash[i] & 1 == 1) {
            ans[n / 2] = 'a' + i;
            hash[i] -= 1;
        }
        while(hash[i] > 0) {
            ans[l++] = 'a' + i;
            ans[r--] = 'a' + i;
            hash[i] -= 2;
        }
    }
    ans[n] = '\0';
    return ans;
}