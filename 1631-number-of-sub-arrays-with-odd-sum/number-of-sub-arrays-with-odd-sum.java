class Solution {
    public int numOfSubarrays(int[] arr) {
        int ans = 0, sum = 0;
        for(int i = 0; i < arr.length; i++) {
            sum += arr[i];
            ans += (sum & 1);
        }
        ans += ((long) (arr.length - ans) * ans) % 1000000007;
        return ans;
    }
}