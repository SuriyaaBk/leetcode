int getWinner(int* arr, int arrSize, int k) {
    int ans = arr[0], n = 0;
    for(int i = 1; i < arrSize; i++) {
        if(arr[i] > ans) {
            ans = arr[i];
            n = 0;
        }
        if(++n == k) return ans;
    }
    return ans;
}