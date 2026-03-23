class Solution {
    public boolean uniformArray(int[] nums1) {
        int even = nums1[0], min = nums1[0];
        for(int i = 1; i < nums1.length; i++) {
            min = Math.min(min, nums1[i]);
            even |= nums1[i];
        }
        return (min & 1) == 1 || (even & 1) == 0;
    }
}