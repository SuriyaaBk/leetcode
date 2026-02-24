int minimumSize(int* nums, int numsSize, int maxOperations) {
    int l = 1, r = 1000000000;
    while(l < r) {
        int m = (l + r) / 2, c = 0;
        for(int i = 0; i < numsSize; i++) {
            c += (nums[i] - 1) / m;
        }
        if(c > maxOperations) l = m + 1;
        else r = m;
    }
    return l;
}