class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even = nums1[0], min = nums1[0];
        for(int i = 1; i < nums1.size(); i++) {
            min = fmin(min, nums1[i]);
            even |= nums1[i];
        }
        return (min & 1) || !(even & 1);
    }
};