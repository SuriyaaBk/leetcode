int minCost(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int ans = 0;
    int* hash1 = (int*)malloc(80001 * sizeof(int));
    int* hash2 = (int*)malloc(80001 * sizeof(int));
    for(int i = 0; i <= 80000; i++) hash1[i] = hash2[i] = 0;
    for(int i = 0; i < nums1Size; i++) {
        hash1[nums1[i]]++;
        hash2[nums2[i]]++;
    }
    for(int i = 0; i <= 80000; i++) {
        if(hash1[i] > 0 || hash2[i] > 0) {
            if(((hash1[i] + hash2[i]) & 1) == 1) return -1;
            ans += ((abs(hash1[i] - hash2[i])) / 2);
        }
    }
    return ans / 2;
}