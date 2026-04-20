int maxDistance(int* colors, int colorsSize) {
    int l = 0, r = colorsSize - 1;
    while(colors[r] == colors[l]) l++;
    while(colors[0] == colors[r]) r--;
    return fmax(colorsSize - 1 - l, r);
}