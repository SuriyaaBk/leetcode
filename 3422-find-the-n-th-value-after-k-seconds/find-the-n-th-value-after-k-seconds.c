int valueAfterKSeconds(int n, int k) {
    int* dp = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) dp[i] = 1;
    for(int i = 0; i < k; i++) {
        for(int j = 1; j < n; j++) {
            dp[j] = (dp[j] + dp[j - 1]) % 1000000007;
        }
    }
    int ans = dp[n - 1];
    free(dp);
    return ans;
}