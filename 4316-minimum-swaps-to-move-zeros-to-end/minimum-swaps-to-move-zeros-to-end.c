int minimumSwaps(int* nums, int numsSize) {
    int ans = 0, i = 0, j = numsSize - 1;
    while(i < j) {
        while(i < j && nums[j] == 0) j--;
        if(nums[j] != 0 && nums[i] == 0) {
            ans++;
            j--;
        }
        i++;
    }
    return ans;
}