int minDeletionSize(char** strs, int strsSize) {
    int ans = 0;
    for(int j = 0; strs[0][j]; j++) {
        int c = 0;
        for(int i = 1; i < strsSize; i++) {
            if(strs[i][j] < strs[i-1][j]) {
                c = 1;
                break;
            }
        }
        ans += c;
    }
    return ans;
}