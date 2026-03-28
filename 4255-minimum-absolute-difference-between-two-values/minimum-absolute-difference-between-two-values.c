int minAbsoluteDifference(int* nums, int numsSize) {
    int ans = INT_MAX, one_ind = -1, two_ind = -1;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == 1) {
            one_ind = i;
            if(two_ind != -1) ans = fmin(ans, one_ind - two_ind);
        } else if(nums[i] == 2) {
            two_ind = i;
            if(one_ind != -1) ans = fmin(ans, two_ind - one_ind);
        }
    }
    return ans == INT_MAX ? -1 : ans;
}