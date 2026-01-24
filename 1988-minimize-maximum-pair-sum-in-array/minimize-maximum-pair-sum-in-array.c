int minPairSum(int* nums, int numsSize) {
    int min = INT_MAX, max = INT_MIN;
    int* freq = (int*)calloc(100001, sizeof(int));
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] < min) min = nums[i];
        if(nums[i] > max) max = nums[i];
        freq[nums[i]]++;
    }
    int max_sum = 0, l = min, r = max;
    while(l <= r) {
        if(freq[l] == 0) l++;
        else if(freq[r] == 0) r--;
        else {
            max_sum = fmax(max_sum, l + r);
            freq[l]--;
            freq[r]--;
        }
    }
    return max_sum;
}