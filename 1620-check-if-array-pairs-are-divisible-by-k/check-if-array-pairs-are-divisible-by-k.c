bool canArrange(int* arr, int arrSize, int k) {
    int* hash = (int*)calloc(k, sizeof(int));
    for(int i = 0; i < arrSize; i++) {
        int rem = (arr[i] % k + k) % k;
        hash[rem] += 1;
    }
    if(hash[0] % 2 != 0) return false;
    for(int i = 1; i <= k / 2; i++) {
        if(hash[i] != hash[k - i]) return false;
    }
    return true;
}