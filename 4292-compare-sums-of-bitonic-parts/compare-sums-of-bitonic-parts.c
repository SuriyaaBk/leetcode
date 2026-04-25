int compareBitonicSums(int* nums, int numsSize) {
    int i = 0;
    long long a = 0, d = 0;
    while(nums[i + 1] > nums[i]) a += nums[i++];
    a += nums[i];
    while(i < numsSize) d += nums[i++];   
    if(a > d) return 0;
    else if(d > a)  return 1;
    return -1;
}