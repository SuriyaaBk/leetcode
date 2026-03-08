int minimumIndex(int* capacity, int capacitySize, int itemSize) {
    int min_cap = INT_MAX, ans = -1;
    for(int i = 0; i < capacitySize; i++) {
        if(capacity[i] >= itemSize && capacity[i] < min_cap) {
            min_cap = capacity[i];
            ans = i;
        }
    }
    return ans;
}