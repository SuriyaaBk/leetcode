class Solution {
    public long countValidSubstrings(String s) {
        char[] ch = s.toCharArray();
        int n = ch.length;
        long ans = 3, c = 3;
        if(n < 3) return n | 1;
        for(int i = 2; i < n; i++, c++) {
            if(ch[i - 2] == 'a' && ch[i - 1] == 'b' && ch[i] == 'c') c = 2;
            ans += c; 
        }
        return ans;
    }
}