class Solution {
    public int minOperations(String s) {
        int n, c = 0, j = 0;
        for(n = 0; n < s.length(); n++) {
            if(s.charAt(n) - '0' == j) c++;
            j ^= 1;
        }
        return c < n - c ? c : n - c;
    }
}