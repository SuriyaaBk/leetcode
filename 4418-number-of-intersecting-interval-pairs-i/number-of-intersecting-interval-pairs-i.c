int countIntersectingIntervals(int** intervals, int intervalsSize, int* intervalsColSize) {
    int ans = 0;
    for(int i = 0; i < intervalsSize - 1; i++) {
        for(int j = i + 1; j < intervalsSize; j++) {
            if(intervals[j][0] <= intervals[i][1] && intervals[i][0] <= intervals[j][1]) ans++;
        }
    }
    return ans; 
}