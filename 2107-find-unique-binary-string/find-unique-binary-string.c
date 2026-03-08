char* findDifferentBinaryString(char** nums, int numsSize) {
    int n = numsSize;
    char* ans = (char*)malloc((n + 1) * sizeof(int));
    for(int i = 0; i < n; i++) {
        ans[i] = nums[i][i] == '0' ? '1' : '0';
    }
    ans[n] = '\0';
    return ans;
}