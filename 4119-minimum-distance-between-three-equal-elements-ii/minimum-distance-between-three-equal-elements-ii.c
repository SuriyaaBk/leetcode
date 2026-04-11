int minimumDistance(int* nums, int numsSize) {
    int ans = INT_MAX, hash[100001][3];
    for(int i = 0; i <= 100000; i++) hash[i][0] = hash[i][1] = hash[i][2] = -1;
    for(int i = 0; i < numsSize; i++) {
        int n = nums[i];
        hash[n][2] = hash[n][1];
        hash[n][1] = hash[n][0];
        hash[n][0] = i;
        if(hash[n][2] != -1) ans = fmin(ans, 2 * (hash[n][0] - hash[n][2]));
    }
    return ans == INT_MAX ? -1 : ans;
}