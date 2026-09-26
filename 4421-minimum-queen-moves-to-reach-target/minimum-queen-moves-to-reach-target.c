int minQueenMoves(int* source, int sourceSize, int* target, int targetSize) {
    int a = source[0], b = source[1], c = target[0], d = target[1];
    if(a == c && b == d) return 0;
    else if((a + b == c + d) || (a == c) || (b == d) || (a == b && c == d) || ((a - c) == (b - d))) return 1;
    return 2;
}