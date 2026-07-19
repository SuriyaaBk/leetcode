bool canReach(int* start, int startSize, int* target, int targetSize) {
    return (start[0] + start[1]) % 2 == (target[0] + target[1]) % 2;
}