int maxDistance(int* colors, int n) {
    int l = 0, r = n - 1;
    while(colors[n - 1] == colors[l]) l++;
    while(colors[0] == colors[r]) r--;
    return fmax(n - 1 - l, r);
}