int xorAfterQueries(int* nums, int numsSize, int** queries, int queriesSize, int* queriesColSize) {
    int ans = 0;
    for(int i = 0; i < queriesSize; i++) {
        int l = queries[i][0], r = queries[i][1], k = queries[i][2], v = queries[i][3];
        while(l <= r) {
            nums[l] = ((long)nums[l] * v) % (1000000007);
            l += k;
        }
    }
    for(int i = 0; i < numsSize; i++) ans ^= nums[i];
    return ans;
}