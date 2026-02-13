int getMaxLen(int* nums, int numsSize) {
    int ans = 0, p1 = 0, p2 = 0, n = 0, f = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == 0) {
            p1 = p2 = n = f = 0;
        } else if(nums[i] < 0) {
            n += 1;
            if(f == 1) {
                p1 += p2 + n;
                p2 = n = f = 0;
            } else f = 1;
        } else {
            if(f == 0) p1 += 1;
            else p2 += 1;
        }
        ans = fmax(ans, fmax(p1, p2));
    }
    p1 = 0, p2 = 0, n = 0, f = 0;
    for(int i = numsSize - 1; i >= 0; i--) {
        if(nums[i] == 0) {
            p1 = p2 = n = f = 0;
        } else if(nums[i] < 0) {
            n += 1;
            if(f == 1) {
                p1 += p2 + n;
                p2 = n = f = 0;
            } else f = 1;
        } else {
            if(f == 0) p1 += 1;
            else p2 += 1;
        }
        ans = fmax(ans, fmax(p1, p2));
    }
    return ans;
}