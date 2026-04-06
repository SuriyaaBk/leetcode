bool hasAllCodes(char* s, int k) {
    int num = 0, uniq_nums = 1 << k, mask = uniq_nums - 1;
    int* hash = (int*)calloc(uniq_nums, sizeof(int));
    for(int i = 0; s[i]; i++) {
        num = ((num << 1) & mask) | (s[i] & 1);
        if(i < k - 1) continue;
        if(hash[num] == 0) {
            hash[num] = 1;
            uniq_nums--;
            if(uniq_nums == 0) return true;
        }
    }
    return false;
}