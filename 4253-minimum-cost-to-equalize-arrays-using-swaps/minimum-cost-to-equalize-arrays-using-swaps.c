int minCost(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int ans = 0;
    int* hash = (int*)calloc(80001, sizeof(int));
    for(int i = 0; i < nums1Size; i++) {
        hash[nums1[i]]++;
        hash[nums2[i]]--;
    }
    for(int i = 0; i <= 80000; i++) {
        if(hash[i] & 1) return -1;
        if(hash[i] > 0) ans += hash[i] / 2;
    }
    return ans;
}