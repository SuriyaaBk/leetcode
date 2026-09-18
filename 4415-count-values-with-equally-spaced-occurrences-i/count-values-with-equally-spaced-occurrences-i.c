int countSpecialIntegers(int* nums, int numsSize) {
    int ans = 0;
    int* last_ind = (int*)calloc(101, sizeof(int));
    int* count = (int*)calloc(101, sizeof(int));
    for(int i = 0; i < numsSize; i++) {
        count[nums[i]]++;
        last_ind[nums[i]] = i;
    }
    for(int i = 0; i <= 100; i++) {
        if(count[i] == 3) {
            int c = last_ind[i], b = c - 1, a;
            while(nums[c] != nums[b]) b--;
            a = b - (c - b);
            if(a >= 0 && nums[a] == nums[c]) ans++;
        }
    }
    free(last_ind);
    free(count);
    return ans;
}