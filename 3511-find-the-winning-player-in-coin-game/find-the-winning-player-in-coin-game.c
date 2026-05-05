char* winningPlayer(int x, int y) {
    int min = fmin(x, y/4);
    return min & 1 ? "Alice" : "Bob";
}