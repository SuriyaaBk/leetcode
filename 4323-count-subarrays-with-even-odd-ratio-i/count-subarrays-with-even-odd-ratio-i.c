int countRatioSubarrays(int* nums, int numsSize, int a, int b) {
    int ans = 0;
    for(int i = 0; i < numsSize; i++) {
        int x = 0, y = 0;
        for(int j = i; j < numsSize; j++) {
            if(nums[j] & 1) y++;
            else x++;
            if(x * b <= y * a) ans++;
        }
    }
    return ans;
}