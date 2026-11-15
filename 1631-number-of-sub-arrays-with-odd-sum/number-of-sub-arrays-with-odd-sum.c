int numOfSubarrays(int* arr, int arrSize) {
    int ans = 0, sum = 0;
    for(int i = 0; i < arrSize; i++) {
        sum += arr[i];
        ans += (sum & 1);
    }
    ans += ((long) (arrSize - ans) * ans) % 1000000007;
    return ans;
}