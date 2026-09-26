int minQueenMoves(int* source, int sourceSize, int* target, int targetSize) {
    int r1 = source[0], c1 = source[1], r2 = target[0], c2 = target[1];
    if(r1 == r2 && c1 == c2) return 0;
    else if(r1 == r2 || c1 == c2 || abs(r1 - r2) == abs(c1 - c2)) return 1;
    return 2;
}