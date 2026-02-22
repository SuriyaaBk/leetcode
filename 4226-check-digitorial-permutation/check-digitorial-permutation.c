int fact(int n) {
    if(n == 0 || n == 1) return 1;
    return n * fact(n - 1);
}
bool isDigitorialPermutation(int n) {
    int fact_sum = 0;
    int* hash1 = (int*)calloc(10, sizeof(int));
    int* hash2 = (int*)calloc(10, sizeof(int));
    while(n > 0) {
        fact_sum += fact(n % 10);
        hash1[n % 10]++;
        n /= 10;
    }
    while(fact_sum > 0) {
        hash2[fact_sum % 10]++;
        fact_sum /= 10;
    }
    for(int i = 0; i < 10; i++) {
        if(hash1[i] != hash2[i]) return false;
    }
    return true;
}