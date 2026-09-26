bool canTransform(int* source, int sourceSize, int* target, int targetSize) {
    long sum = 0;
    for(int i = 0; i < sourceSize; i++) sum += source[i] - target[i];
    return sum == 0;
}