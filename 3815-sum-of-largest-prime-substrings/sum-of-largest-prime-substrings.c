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
    long long* hash = (long long*)calloc(55, sizeof(long long));
    for(int i = 0; s[i]; i++) {
        long long n = 0;
        for(int j = i; s[j]; j++) {
            n += (s[j] - '0');
            if(isPrime(n)) hash[k++] = n;
            n *= 10;
        }
    }
    long long max1 = 0, max2 = 0, max3 = 0;
    for(int i = 0; i < k; i++) {
        if(hash[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = hash[i];
        }else if(hash[i] > max2 && hash[i] != max1) {
            max3 = max2;
            max2 = hash[i];
        }else if(hash[i] > max3 && hash[i] != max2 && hash[i] != max1) max3 = hash[i];
    }
    return max1 + max2 + max3;
}