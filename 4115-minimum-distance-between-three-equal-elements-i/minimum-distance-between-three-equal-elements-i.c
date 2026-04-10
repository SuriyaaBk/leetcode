#define MIN(a,b) (a < b ? a : b)
int minimumDistance(int* nums, int numsSize) {
    int ans = INT_MAX;
    for(int i = 0; i < numsSize - 2; i++) {
        for(int j = i + 1; j < numsSize - 1; j++) {
            if(nums[j] != nums[i]) continue;
            for(int k = j + 1; k < numsSize; k++) {
                if(nums[j] == nums[k]) {
                    ans = MIN(ans , (j - i) + (k - j) + (k - i));
                }
            }
        }
    }
    if(ans == INT_MAX) return -1;
    return ans;
}