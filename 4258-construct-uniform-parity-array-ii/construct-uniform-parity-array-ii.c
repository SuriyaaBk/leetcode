bool uniformArray(int* nums1, int nums1Size) {
    int even = nums1[0], min = nums1[0];
    for(int i = 1; i < nums1Size; i++) {
        min = fmin(min, nums1[i]);
        even |= nums1[i];
    }
    return (min & 1) || !(even & 1);
}