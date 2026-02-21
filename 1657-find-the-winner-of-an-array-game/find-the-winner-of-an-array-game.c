int getWinner(int* arr, int arrSize, int k) {
    int ans = arr[0], c = 0;
    for(int i = 1; i < arrSize; i++) {
        if(arr[i] > ans) {
            ans = arr[i];
            c = 1;
        } else c++;
        if(c == k) return ans;
    }
    return ans;
}