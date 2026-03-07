class Solution {
    public int minFlips(String s) {
        int a[] = new int[2];
        char[] c = s.toCharArray();
        int ans = 100000, x = 0, y = 0;
        for(int i = 0; i < c.length; i++, x ^= 1) {
            a[(c[i] - '0') ^ x]++;
        }
        for(int i = 0; i < c.length; i++, x ^= 1, y ^= 1) {
            a[(c[i] - '0') ^ y]--;
            a[(c[i] - '0') ^ x]++;
            ans = Math.min(ans, Math.min(a[0], a[1]));
        }
        return ans;
    }
}