char repeatedCharacter(char* s) {
    int dp[26] = {0};
    for(int i = 0; s[i]; i++) {
        dp[s[i] - 'a']++;
        if(dp[s[i] - 'a'] == 2) {
            return s[i];
        }
    }
    return ' ';
}