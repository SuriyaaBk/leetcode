int sumDigits(int n){
    int sum = 0;
    while(n > 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
int smallestIndex(int* nums, int numsSize) {
    int ans = -1;
    for(int i = 0; i < numsSize; i++) {
        if(i == sumDigits(nums[i])) {
            ans = i;
            break;
        }
    }
    return ans;
}