int xorAfterQueries(int* nums, int numsSize, int** queries, int queriesSize, int* queriesColSize) {
    int ans = 0;
    for(int i = 0; i < queriesSize; i++) {
        int l = queries[i][0];
        int r = queries[i][1];
        int k = queries[i][2];
        int v = queries[i][3];
        int idx = l;
        while(idx <= r) {
            nums[idx] = ((long)nums[idx] * v) % (1000000007);
            idx += k;
        }
    }
    for(int i = 0; i < numsSize; i++) ans ^= nums[i];
    return ans;
}