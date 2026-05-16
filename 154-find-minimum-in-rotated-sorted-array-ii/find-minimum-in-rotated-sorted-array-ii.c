int findMin(int* nums, int numsSize) {
    int l = 0, r = numsSize - 1;
    if(nums[l] < nums[r]) return nums[l];
    while(l < r) {
        int mid = l + (r - l) / 2;
        if(nums[mid] > nums[r]) l = mid + 1;
        else if(nums[mid] < nums[r]) r = mid;
        else r--;
    }
    return nums[l];
}