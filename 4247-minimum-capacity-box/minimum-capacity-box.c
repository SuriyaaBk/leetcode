int minimumIndex(int* capacity, int capacitySize, int itemSize) {
    int min_diff = INT_MAX, ans = -1;
    for(int i = 0; i < capacitySize; i++) {
        if(capacity[i] >= itemSize) {
            int diff = capacity[i] - itemSize;
            if(diff < min_diff) {
                min_diff = diff;
                ans = i;
            }
        }
    }
    return ans;
}