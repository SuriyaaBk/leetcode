int scoreDifference(int* nums, int numsSize) {
    int x = 0, y = 0, swap = 1;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] & 1) swap ^= 1;
        if((i + 1) % 6 == 0) swap ^= 1;
        if(swap) x += nums[i];
        else y += nums[i]; 
    }
    printf("%d %d",x,y);
    return x - y;
}