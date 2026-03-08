int smallestBalancedIndex(int* nums, int numsSize) {
    long long sum = 0, pro = 1;
    int l = 0, r = numsSize - 1;
    while(l < r) {
        if(sum < pro) sum += nums[l++];
        else pro *= nums[r--];
    }
    if(sum == pro) return l;
    return -1;
}