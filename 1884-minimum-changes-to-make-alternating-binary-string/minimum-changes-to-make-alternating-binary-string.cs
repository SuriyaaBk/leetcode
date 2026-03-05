public class Solution {
    public int MinOperations(string s) {
        int n, c = 0, j = 0;
        for(n = 0; n < s.Length; n++, j ^= 1) {
            if(s[n] - '0' == j) c++;
        }
        return c < n - c ? c : n - c;
    }
}