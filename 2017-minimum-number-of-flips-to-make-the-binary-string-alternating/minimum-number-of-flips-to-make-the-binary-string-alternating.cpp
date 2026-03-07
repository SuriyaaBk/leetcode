class Solution {
public:
    int minFlips(string s) {
        int a[2] = {0, 0};
        int ans = 100000, x = 0, y = 0;
        for(int i = 0; i < s.size(); i++, x ^= 1) {
            a[(s[i] - '0') ^ x]++;
        }
        for(int i = 0; i < s.size(); i++, x ^= 1, y ^= 1) {
            a[(s[i] - '0') ^ y]--;
            a[(s[i] - '0') ^ x]++;
            ans = min(ans, min(a[0], a[1]));
        }
        return ans;
    }
};