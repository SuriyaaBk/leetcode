int maxDistance(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i = 0, j = 0;
    while(i < nums1Size && j < nums2Size) {
        if(nums1[i] > nums2[j]) i++;
        j++;
    }
    return fmax(0, j - i - 1);
}