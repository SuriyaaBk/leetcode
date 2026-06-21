int countValidSubarrays(int* nums, int numsSize, int x) {
    int ans = 0;
    for(int i = 0; i < numsSize; i++) {
        long long sum = 0;
        for(int j = i; j < numsSize; j++) {
            sum += nums[j];
            long long first = sum, last = sum % 10;
            if(last != x) continue;
            else while(first >= 10) first /= 10;
            if(first == x && last == x) ans++; 
        }
    }
    return ans;
}