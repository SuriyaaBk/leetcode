char** createGrid(int m, int n, int* returnSize) {
    char** ans = (char**)malloc(m * sizeof(char*));
    for(int i = 0; i < m; i++) {
        ans[i] = (char*)malloc((n + 1) * sizeof(char));
        ans[i][n] = '\0';
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) ans[i][j] = '#';
    }
    for(int i = 0; i < m; i++) ans[i][0] = '.';
    for(int j = 1; j < n; j++) ans[m - 1][j] = '.';
    *returnSize = m;
    return ans;
}