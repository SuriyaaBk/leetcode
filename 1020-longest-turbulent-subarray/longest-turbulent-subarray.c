int maxTurbulenceSize(int* arr, int arrSize) {
    int ans = 1, inc = 1, dec = 1;
    for(int i = 1; i < arrSize; i++) {
        if(arr[i - 1] < arr[i]) {
            inc = dec + 1;
            dec = 1;
        } else if(arr[i - 1] > arr[i]) {
            dec = inc + 1;
            inc = 1;
        } else inc = dec = 1;
        ans = fmax(ans, fmax(inc, dec));
    }
    return ans;
}