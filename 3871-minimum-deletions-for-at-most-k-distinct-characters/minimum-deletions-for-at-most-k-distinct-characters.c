int compare(const void* a, const void* b) {
    return *(int*)a > *(int*)b;
}
int minDeletion(char* s, int k) {
    int* hash = (int*)calloc(26, sizeof(int));
    int j = 0, dis = 0, ans = 0;
    for(int i = 0; s[i]; i++) {
        if(hash[s[i] - 'a'] == 0) dis += 1;
        hash[s[i] - 'a'] += 1;
    }
    qsort(hash, 26, sizeof(int), compare);
    while(hash[j] == 0) j++;
    while(dis > k) {
        ans += hash[j++];
        dis -= 1;
    }
    return ans;
}