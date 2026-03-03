int compare(const void* a, const void* b) {
    return *(long long*)b > *(long long*)a;
}
bool isPrime(long long n) {
    if(n <= 1) return false;
    if(n != 2 && n % 2 == 0) return false;
    for(long long i = 3; i*i <= n; i+=2) {
        if(n % i == 0) return false;
    }
    return true;
}
long long sumOfLargestPrimes(char* s) {
    int c = 1, k = 0;
    long long ans = 0;
    long long* hash = (long long*)calloc(55, sizeof(long long));
    for(int i = 0; s[i]; i++) {
        long long n = 0;
        for(int j = i; s[j]; j++) {
            n += (s[j] - '0');
            if(isPrime(n)) hash[k++] = n;
            n *= 10;
        }
    }
    if(k == 0) return 0;
    qsort(hash, k, sizeof(long long), compare);
    ans += hash[0];
    for(int i = 1; i < k && c < 3; i++) {
        if(hash[i] != hash[i - 1]) {
            ans += hash[i];
            c++;
        }
    }
    return ans;
}