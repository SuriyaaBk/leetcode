class Solution {
public:
    int isPrime(int n) {
        if(n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 19) return 1;
        return 0;
    }
    int CountOnes(int n) {
        int x = 0;
        while(n > 0) {
            if(n & 1) x += 1;
            n >>= 1;
        }
        return isPrime(x);
    }
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i = left; i <= right; i++) ans += CountOnes(i);
        return ans;
    }
};