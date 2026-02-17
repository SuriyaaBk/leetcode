bool hasIncreasingSubarrays(int* nums, int numsSize, int k) {
    int n = numsSize - 2 * k;
    for(int i = 0; i <= n; i++) {
        bool flag = true;
        int m = i + k - 1;
        for(int j = i; j < m; j++) {
            if(nums[j] >= nums[j + 1]) {
                flag = false;
                break;
            }
        }
        if(flag == true) {
            m =i + 2 * k - 1;
            for(int j = i + k; j < m; j++) {
                if(nums[j] >= nums[j + 1]) {
                    flag = false;
                    break;
                }
            }
        }
        if(flag == true) return true;
    }   
    return false; 
}