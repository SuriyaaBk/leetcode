int findLength(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int ans = 0;
    for(int i = 0; i < nums1Size; i++) {
        for(int j = 0; j < nums2Size; j++) {
            int len = 0;
            if(nums1[i] == nums2[j]) {
                int a = i, b = j;
                while(a < nums1Size && b < nums2Size) {
                    if(nums1[a] == nums2[b]) {
                        a++;
                        b++;
                        len++;
                    } else break;
                }
            if(len > ans) ans = len;
            if(ans == nums2Size) return ans;
            else if(ans == nums1Size - i) return ans;
            }
        }
    }
    return ans;
}