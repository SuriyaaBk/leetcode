int countCompleteSubarrays(int* nums, int numsSize) {
    int* hash = (int*)calloc(2001, sizeof(int));
    int dis = 0, sub_dis = 0, ans = 0, r = 0, l = 0;
    for(int i = 0; i < numsSize; i++) {
        if(hash[nums[i]] == 0) dis += 1;
        hash[nums[i]] += 1;
    }
    for(int i = 0; i < numsSize; i++) hash[nums[i]] = 0;
    while(r < numsSize) {
        if(hash[nums[r]] == 0) sub_dis += 1;
        hash[nums[r]] += 1;
        while(sub_dis == dis) {
            ans += numsSize - r;
            hash[nums[l]] -= 1;
            if(hash[nums[l]] == 0) sub_dis -= 1;
            l++;
        }
        r++;
    }
    free(hash);
    return ans;
}